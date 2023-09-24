#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__MethodResponse_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionResponse_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::ConstructionResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionResponse::*)(::bs_hook::Il2CppWrapperType, System::Runtime::Remoting::Messaging::LogicalCallContext, System::Runtime::Remoting::Messaging::IMethodCallMessage)>(&System::Runtime::Remoting::Messaging::ConstructionResponse::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x232df84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::LogicalCallContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::ConstructionResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionResponse::*)(System::Exception, System::Runtime::Remoting::Messaging::IMethodCallMessage)>(&System::Runtime::Remoting::Messaging::ConstructionResponse::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2338d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::ConstructionResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionResponse::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::Messaging::ConstructionResponse::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2341098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::ConstructionResponse.get_Properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary (System::Runtime::Remoting::Messaging::ConstructionResponse::*)()>(&System::Runtime::Remoting::Messaging::ConstructionResponse::get_Properties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2341114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Messaging::ConstructionResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionResponse>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Activation::IConstructionReturnMessage
constexpr  System::Runtime::Remoting::Messaging::ConstructionResponse::operator System::Runtime::Remoting::Activation::IConstructionReturnMessage() const noexcept {
return System::Runtime::Remoting::Activation::IConstructionReturnMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodReturnMessage
constexpr  System::Runtime::Remoting::Messaging::ConstructionResponse::operator System::Runtime::Remoting::Messaging::IMethodReturnMessage() const noexcept {
return System::Runtime::Remoting::Messaging::IMethodReturnMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodMessage
constexpr  System::Runtime::Remoting::Messaging::ConstructionResponse::operator System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept {
return System::Runtime::Remoting::Messaging::IMethodMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessage
constexpr  System::Runtime::Remoting::Messaging::ConstructionResponse::operator System::Runtime::Remoting::Messaging::IMessage() const noexcept {
return System::Runtime::Remoting::Messaging::IMessage(::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Remoting::Messaging::ConstructionResponse System::Runtime::Remoting::Messaging::ConstructionResponse::New_ctor(::bs_hook::Il2CppWrapperType resultObject, System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage msg)  {
System::Runtime::Remoting::Messaging::ConstructionResponse o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Messaging::ConstructionResponse>(resultObject, callCtx, msg))};
return o;
}
 void System::Runtime::Remoting::Messaging::ConstructionResponse::_ctor(::bs_hook::Il2CppWrapperType resultObject, System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::LogicalCallContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resultObject, callCtx, msg);
}
 System::Runtime::Remoting::Messaging::ConstructionResponse System::Runtime::Remoting::Messaging::ConstructionResponse::New_ctor(System::Exception e, System::Runtime::Remoting::Messaging::IMethodCallMessage msg)  {
System::Runtime::Remoting::Messaging::ConstructionResponse o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Messaging::ConstructionResponse>(e, msg))};
return o;
}
 void System::Runtime::Remoting::Messaging::ConstructionResponse::_ctor(System::Exception e, System::Runtime::Remoting::Messaging::IMethodCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, msg);
}
 System::Runtime::Remoting::Messaging::ConstructionResponse System::Runtime::Remoting::Messaging::ConstructionResponse::New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
System::Runtime::Remoting::Messaging::ConstructionResponse o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Messaging::ConstructionResponse>(info, context))};
return o;
}
 void System::Runtime::Remoting::Messaging::ConstructionResponse::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 System::Collections::IDictionary System::Runtime::Remoting::Messaging::ConstructionResponse::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionResponse>::get(),
                            "get_Properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method);
}
