# count_test
강정수님 요청

## 빌드명령
docker build -t kiss7001/count_test ./

## 컨테이너 실행( 백그라운드 )
docker run -d --name=count_test kiss7001/count_test:latest

## 컨테이너 실행( /bin/bash )
docker run -it --name=count_test kiss7001/count_test:latest /bin/bash

## 컨테이너 실행 및 자동삭제 ( /bin/bash )
docker run --rm -it --name=count_test kiss7001/count_test:latest /bin/bash

## 컨테이너 중지 및 삭제 삭제
docker stop count_test && docker rm count_test

## 컨데이터 데몬실행
docker run --name test -d busybox sh -c "while true; do $(echo date); sleep 1; done"

## 컨데이터 데몬로그 모니터
docker logs test -f

## 우분투리눅스 데몬실행 명령
docker run -d --name test_ubuntu ubuntu:20.04 sleep infinity
