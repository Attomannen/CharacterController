#pragma once
// Outputs the given string as a debug message on screen
#define DEBUG(Message) \
GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, Message)
#define DEBUG_ONCE_PER_TICK(Message) \
GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::White, Message)
// Outputs the given string as a warning debug message on screen
#define DEBUG_WARNING(Message) \
GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, Message)
// Outputs the given string as an error debug message on screen
#define DEBUG_ERROR(Message) \
GEngine->AddOnScreenDebugMessage(-1, 500.0f, FColor::Red, Message)

#define DEBUG_FLOAT(Text,Value) \
GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT(Text " %f"), Value))

#define DEBUG_BOOL(Text,Value) \
GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT(Text " %s"), Value ? TEXT("True") : TEXT("False")))

#define DEBUG_VECTOR(Text,Vector) \
GEngine->AddOnScreenDebugMessage(-1, 50.0f, FColor::Green, FString::Printf(TEXT(Text " %s"), *Vector.ToString()))

#define DEBUG_INT(Text,Value) \
GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT(Text " %d"), Value ))

#define DEBUG_CLEAR(Key) \
GEngine->RemoveOnScreenDebugMessage(Key)
