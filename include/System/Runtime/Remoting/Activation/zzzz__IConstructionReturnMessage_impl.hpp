#pragma once
namespace {
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodReturnMessage
constexpr  ::System::Runtime::Remoting::Activation::IConstructionReturnMessage::operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMethodReturnMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodMessage
constexpr  ::System::Runtime::Remoting::Activation::IConstructionReturnMessage::operator ::System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMethodMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessage
constexpr  ::System::Runtime::Remoting::Activation::IConstructionReturnMessage::operator ::System::Runtime::Remoting::Messaging::IMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMessage(::bs_hook::Il2CppWrapperType::instance);
}
} // end anonymous namespace
