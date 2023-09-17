#pragma once
namespace {
#include "System/Runtime/Remoting/Messaging/zzzz__ReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodReturnDictionary_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IInternalMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ReturnMessage::*)(::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>, int32_t, ::System::Runtime::Remoting::Messaging::LogicalCallContext, ::System::Runtime::Remoting::Messaging::IMethodCallMessage)>(&::System::Runtime::Remoting::Messaging::ReturnMessage::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x232bb94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ReturnMessage::*)(::System::Exception, ::System::Runtime::Remoting::Messaging::IMethodCallMessage)>(&::System::Runtime::Remoting::Messaging::ReturnMessage::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x232ba4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_ArgCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_ArgCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2345d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_ArgCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_Args
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_Args)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2345d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_Args",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_LogicalCallContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2345d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_LogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_MethodBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodBase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2345dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_MethodBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_MethodName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2345dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_MethodName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_MethodSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodSignature)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2345e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_MethodSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_Properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_Properties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2345f54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Messaging::ReturnMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_TypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_TypeName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2345fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_Uri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_Uri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.set_Uri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ReturnMessage::*)(::StringW)>(&::System::Runtime::Remoting::Messaging::ReturnMessage::set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234602c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "set_Uri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ReturnMessage::*)(::StringW)>(&::System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234603c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.GetArg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Runtime::Remoting::Messaging::ReturnMessage::*)(int32_t)>(&::System::Runtime::Remoting::Messaging::ReturnMessage::GetArg)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2346044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "GetArg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_Exception
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_OutArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_OutArgs)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x234607c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_OutArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.get_ReturnValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::get_ReturnValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Messaging::ReturnMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Identity (::System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234611c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ReturnMessage.System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ReturnMessage::*)(::System::Runtime::Remoting::Identity)>(&::System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x2346124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodReturnMessage
constexpr  ::System::Runtime::Remoting::Messaging::ReturnMessage::operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMethodReturnMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodMessage
constexpr  ::System::Runtime::Remoting::Messaging::ReturnMessage::operator ::System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMethodMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessage
constexpr  ::System::Runtime::Remoting::Messaging::ReturnMessage::operator ::System::Runtime::Remoting::Messaging::IMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IInternalMessage
constexpr  ::System::Runtime::Remoting::Messaging::ReturnMessage::operator ::System::Runtime::Remoting::Messaging::IInternalMessage() const noexcept {
return ::System::Runtime::Remoting::Messaging::IInternalMessage(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__outArgs(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__outArgs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__args(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__args() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__callCtx(::System::Runtime::Remoting::Messaging::LogicalCallContext value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::LogicalCallContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::LogicalCallContext>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__callCtx() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::LogicalCallContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__returnValue(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__returnValue() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__uri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__uri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__exception(::System::Exception value)  {
::cordl_internals::setInstanceField<::System::Exception, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Exception>(value));
}
constexpr ::System::Exception ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__exception() const {
return ::cordl_internals::getInstanceField<::System::Exception, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__methodBase(::System::Reflection::MethodBase value)  {
::cordl_internals::setInstanceField<::System::Reflection::MethodBase, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Reflection::MethodBase>(value));
}
constexpr ::System::Reflection::MethodBase ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__methodBase() const {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodBase, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__methodName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__methodName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__methodSignature(::ArrayW<::System::Type> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Type>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Type>>(value));
}
constexpr ::ArrayW<::System::Type> ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__methodSignature() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__typeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__typeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__properties(::System::Runtime::Remoting::Messaging::MethodReturnDictionary value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::MethodReturnDictionary, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::MethodReturnDictionary>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::MethodReturnDictionary ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__properties() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::MethodReturnDictionary, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__targetIdentity(::System::Runtime::Remoting::Identity value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Identity, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Identity>(value));
}
constexpr ::System::Runtime::Remoting::Identity ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__targetIdentity() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Identity, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ReturnMessage::__set__inArgInfo(::System::Runtime::Remoting::Messaging::ArgInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::ArgInfo, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::ArgInfo>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::ArgInfo ::System::Runtime::Remoting::Messaging::ReturnMessage::__get__inArgInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::ArgInfo, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "ret", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "outArgs", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "outArgsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "callCtx", ty: "::System::Runtime::Remoting::Messaging::LogicalCallContext", modifiers: "", def_value: None }, CppParam { name: "mcm", ty: "::System::Runtime::Remoting::Messaging::IMethodCallMessage", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::ReturnMessage::ReturnMessage(::bs_hook::Il2CppWrapperType ret, ::ArrayW<::bs_hook::Il2CppWrapperType> outArgs, int32_t outArgsCount, ::System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage mcm)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ReturnMessage>(ret, outArgs, outArgsCount, callCtx, mcm))) {}
 void ::System::Runtime::Remoting::Messaging::ReturnMessage::_ctor(::bs_hook::Il2CppWrapperType ret, ::ArrayW<::bs_hook::Il2CppWrapperType> outArgs, int32_t outArgsCount, ::System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage mcm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ret, outArgs, outArgsCount, callCtx, mcm);
}
// Ctor Parameters [CppParam { name: "e", ty: "::System::Exception", modifiers: "", def_value: None }, CppParam { name: "mcm", ty: "::System::Runtime::Remoting::Messaging::IMethodCallMessage", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::ReturnMessage::ReturnMessage(::System::Exception e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage mcm)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ReturnMessage>(e, mcm))) {}
 void ::System::Runtime::Remoting::Messaging::ReturnMessage::_ctor(::System::Exception e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage mcm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, mcm);
}
 int32_t ::System::Runtime::Remoting::Messaging::ReturnMessage::get_ArgCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_ArgCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::ReturnMessage::get_Args()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_Args",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::Messaging::LogicalCallContext ::System::Runtime::Remoting::Messaging::ReturnMessage::get_LogicalCallContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_LogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Reflection::MethodBase ::System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodBase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_MethodBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_MethodName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodSignature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_MethodSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IDictionary ::System::Runtime::Remoting::Messaging::ReturnMessage::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_Properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Runtime::Remoting::Messaging::ReturnMessage::get_TypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Runtime::Remoting::Messaging::ReturnMessage::get_Uri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_Uri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Messaging::ReturnMessage::set_Uri(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "set_Uri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Remoting::Messaging::ReturnMessage::GetArg(int32_t argNum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "GetArg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, argNum);
}
 ::System::Exception ::System::Runtime::Remoting::Messaging::ReturnMessage::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::ReturnMessage::get_OutArgs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_OutArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Remoting::Messaging::ReturnMessage::get_ReturnValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "get_ReturnValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::Identity ::System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ReturnMessage>::get(),
                            "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
