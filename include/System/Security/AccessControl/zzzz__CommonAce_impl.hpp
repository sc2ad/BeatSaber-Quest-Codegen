#pragma once
#include "System/Security/AccessControl/zzzz__QualifiedAce_impl.hpp"
#include "System/Security/AccessControl/zzzz__CommonAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
//  Writing Method size for method: System::Security::AccessControl::CommonAce._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAce::*)(System::Security::AccessControl::AceFlags, System::Security::AccessControl::AceQualifier, int32_t, System::Security::Principal::SecurityIdentifier, bool, ::ArrayW<uint8_t>)>(&System::Security::AccessControl::CommonAce::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23157f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::CommonAce._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAce::*)(::ArrayW<uint8_t>, int32_t)>(&System::Security::AccessControl::CommonAce::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x231598c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::CommonAce.get_BinaryLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::AccessControl::CommonAce::*)()>(&System::Security::AccessControl::CommonAce::get_BinaryLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2315cdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::AccessControl::CommonAce),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::CommonAce.GetBinaryForm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAce::*)(::ArrayW<uint8_t>, int32_t)>(&System::Security::AccessControl::CommonAce::GetBinaryForm)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2315d2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::AccessControl::CommonAce),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::CommonAce.ConvertType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::AccessControl::AceType (*)(System::Security::AccessControl::AceQualifier, bool)>(&System::Security::AccessControl::CommonAce::ConvertType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2315854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                            "ConvertType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "flags", ty: "System::Security::AccessControl::AceFlags", modifiers: "", def_value: None }, CppParam { name: "qualifier", ty: "System::Security::AccessControl::AceQualifier", modifiers: "", def_value: None }, CppParam { name: "accessMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sid", ty: "System::Security::Principal::SecurityIdentifier", modifiers: "", def_value: None }, CppParam { name: "isCallback", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "opaque", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 System::Security::AccessControl::CommonAce::CommonAce(System::Security::AccessControl::AceFlags flags, System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask, System::Security::Principal::SecurityIdentifier sid, bool isCallback, ::ArrayW<uint8_t> opaque)  : System::Security::AccessControl::QualifiedAce(THROW_UNLESS(::il2cpp_utils::New<CommonAce>(flags, qualifier, accessMask, sid, isCallback, opaque))) {}
 void System::Security::AccessControl::CommonAce::_ctor(System::Security::AccessControl::AceFlags flags, System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask, System::Security::Principal::SecurityIdentifier sid, bool isCallback, ::ArrayW<uint8_t> opaque)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags, qualifier, accessMask, sid, isCallback, opaque);
}
// Ctor Parameters [CppParam { name: "binaryForm", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }]
 System::Security::AccessControl::CommonAce::CommonAce(::ArrayW<uint8_t> binaryForm, int32_t offset)  : System::Security::AccessControl::QualifiedAce(THROW_UNLESS(::il2cpp_utils::New<CommonAce>(binaryForm, offset))) {}
 void System::Security::AccessControl::CommonAce::_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryForm, offset);
}
 int32_t System::Security::AccessControl::CommonAce::get_BinaryLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                            "get_BinaryLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::AccessControl::CommonAce::GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                            "GetBinaryForm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryForm, offset);
}
 System::Security::AccessControl::AceType System::Security::AccessControl::CommonAce::ConvertType(System::Security::AccessControl::AceQualifier qualifier, bool isCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::CommonAce>::get(),
                            "ConvertType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::AccessControl::AceType, false>(nullptr, ___internal_method, qualifier, isCallback);
}
