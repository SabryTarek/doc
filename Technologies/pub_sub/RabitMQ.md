rabbitmq
=======

That is correct RabbitMQ as I explained in the video uses Pub/sub pattern. Where you have subscribers (consumers) connecting to a queue and a publisher publishing to a queue. 

As for your second part of your question RabbitMQ uses PUSH model where a consumer connects to a queue and any message published to the queue will be automatically PUSHED to the consumer/subscriber without the subscriber has to request actively it by itself. Kafka also uses pubsub pattern but they use different message delivery approach (not push) they use long polling.. 
--------------------------------------------------------------------------------------------------------------
 it also right to say that MQ is maybe faster and lighter because there are no status, header and body like in HTTP format, and also in HTTP there is no way to recover from failures (e.g resend the request or the response again)?



Hussein Nasser
Hussein Nasser
6 months ago
LawZist i wouldnt use the word “faster” . In Request Sizes: Yes MQ might use a binary protocol so does HTTP/2 so request and response sizes are not really big deal. 

Latency maybe MQ will win since its a stateful architecture compared to HTTP where it is stateless and have to reconstruct the state with every request. But that also means MQ is harder to scale clients. 

As for failures am not sure I think both MQ and HTTP will suffer from unexpected failures. Because HTTP has error codes, idempotency and stateles requests can be resent. MQ has acknowledgements so the client know when was the last message I read successfully and can use that position to recover from failures (at least in kafka)
------------------------------------------------------------------------------------------------------------------

Hi is rabbitmq similar to rsyslog??
Kindly explain to get more clarity

Very interesting, (reading on rsyslog and syslog as Im not familiar with it) but from my reading it looks like rsyslog does use queues optionally so you can effectively achieve the same thing with RabbitMQ.. 

The glaring differences seem like rsyslog is very low level (works on layer 4 TCP/UDP) and doest seem to have a protocol standard where as rabbit is an application level standard (using AMQP)

Also seem like rsyslog doesnt support pub/sub where as RabbitMQ does through exchanges.. 

Thanks for your question.. might make a video on rsyslog.. added to the queue of things to make!


RabbitMQ
Kafka
ActiveMQ
ZeroMQ



REST is a request/ response model 
message queue is a publish/subscription model
# the use cases, if you have a use case where clients are connecting to a central server reading and writing use REST. If you have a case where you as a client want to notify other clients use message queue.











server -> broker
queue -> topic