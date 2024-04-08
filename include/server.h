#pragma once

// Initialize socket for listening
int InitializeFd(unsigned short port);

//start epoll
int epollRun(int lfd);

// Establishing a connection with the client
void*  acceptClient(void* arg);

// recv http request
void*  recvHttpRequest(void* arg);

// parse request line
int parseRequestLine(const char* line, int cfd);

// send file to client
int sendFile(const char* fileName, int cfd);

// Send response header (status line + response header)
int sendHeadMsg(int cfd, int status, const char* descr, const char* type, int length);


const char* getFileType(const char* name);

// send dir
int sendDir(const char* dirName, int cfd);
int hexToDec(char c);
void decodeMsg(char* to, char* from);