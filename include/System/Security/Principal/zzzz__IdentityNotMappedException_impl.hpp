#pragma once
#include "System/zzzz__SystemException_impl.hpp"
namespace {
#include "System/Security/Principal/zzzz__IdentityNotMappedException_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::IdentityNotMappedException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::IdentityNotMappedException::*)()>(&::System::Security::Principal::IdentityNotMappedException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x230bb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IdentityNotMappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityNotMappedException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::IdentityNotMappedException::*)(::StringW)>(&::System::Security::Principal::IdentityNotMappedException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230bbdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IdentityNotMappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityNotMappedException.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::IdentityNotMappedException::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Principal::IdentityNotMappedException::GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x230bbe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Principal::IdentityNotMappedException),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IdentityNotMappedException>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Security::Principal::IdentityNotMappedException::IdentityNotMappedException()  : ::System::SystemException(THROW_UNLESS(::il2cpp_utils::New<IdentityNotMappedException>())) {}
 void ::System::Security::Principal::IdentityNotMappedException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IdentityNotMappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Security::Principal::IdentityNotMappedException::IdentityNotMappedException(::StringW message)  : ::System::SystemException(THROW_UNLESS(::il2cpp_utils::New<IdentityNotMappedException>(message))) {}
 void ::System::Security::Principal::IdentityNotMappedException::_ctor(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IdentityNotMappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 void ::System::Security::Principal::IdentityNotMappedException::GetObjectData(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::IdentityNotMappedException>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
} // end anonymous namespace
