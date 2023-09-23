#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodMessage
constexpr  System::Runtime::Remoting::Messaging::IMethodCallMessage::operator System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept {
return System::Runtime::Remoting::Messaging::IMethodMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessage
constexpr  System::Runtime::Remoting::Messaging::IMethodCallMessage::operator System::Runtime::Remoting::Messaging::IMessage() const noexcept {
return System::Runtime::Remoting::Messaging::IMessage(::bs_hook::Il2CppWrapperType::instance);
}
