apache Kafka
============


TCP (TRANSMISSION CONTROL PROTOCOL),and
RPC(REMOTE PROCEDURE CALL)
Apache Kafka is a distributed streaming application.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Apache Kafka® is a distributed streaming platform. What exactly does that mean?

A streaming platform has three key capabilities:

Publish and subscribe to streams of records, similar to a message queue or enterprise messaging system.
Store streams of records in a fault-tolerant durable way.
Process streams of records as they occur
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Kafka is generally used for two broad classes of applications:

- Building real-time streaming data pipelines that reliably get data between systems or applications
- Building real-time streaming applications that transform or react to the streams of data
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

First a few concepts:

- Kafka is run as a cluster on one or more servers that can span multiple datacenters.
- The Kafka cluster stores streams of records in categories called topics.
- Each record consists of a key, a value, and a timestamp.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Kafka has four core APIs:

1. The Producer API allows an application to publish a stream of records to one or more Kafka topics.
2. The Consumer API allows an application to subscribe to one or more topics and process the stream of records produced to them.
3. The Streams API allows an application to act as a stream processor, consuming an input stream from one or more topics and producing an output stream to one or more output topics, effectively transforming the input streams to output streams.
4. The Connector API allows building and running reusable producers or consumers that connect Kafka topics to existing applications or data systems. For example, a connector to a relational database might capture every change to a table.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

producer (publisher, sender)
consumer (subscriber, receiver)

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
massaging system
    - point-to-point -> Massages Queue EX: Order Processing System
    - pub/sub -> Topics EX: Dish TV
- RabbitMQ
- Kafka

event driven
MQTT protocol
distributed system
streaming
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

