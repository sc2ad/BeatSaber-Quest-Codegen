#pragma once
#include "System/Security/AccessControl/zzzz__QualifiedAce_impl.hpp"
namespace {
#include "System/Security/AccessControl/zzzz__ObjectAce_def.hpp"
#include "System/Security/AccessControl/zzzz__ObjectAceFlags_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Security::AccessControl::AceFlags, ::System::Security::AccessControl::AceQualifier, int32_t, ::System::Security::Principal::SecurityIdentifier, ::System::Security::AccessControl::ObjectAceFlags, ::System::Guid, ::System::Guid, bool, ::ArrayW<uint8_t>)>(&::System::Security::AccessControl::ObjectAce::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2317270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::ObjectAce::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2318670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_BinaryLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_BinaryLength)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2319348;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::AccessControl::ObjectAce),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_InheritedObjectAceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_InheritedObjectAceType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x231939c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_InheritedObjectAceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.set_InheritedObjectAceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Guid)>(&::System::Security::AccessControl::ObjectAce::set_InheritedObjectAceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23193a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "set_InheritedObjectAceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_InheritedObjectAceTypePresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_InheritedObjectAceTypePresent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23192a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_InheritedObjectAceTypePresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_ObjectAceFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::ObjectAceFlags (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_ObjectAceFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23193b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_ObjectAceFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.set_ObjectAceFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Security::AccessControl::ObjectAceFlags)>(&::System::Security::AccessControl::ObjectAce::set_ObjectAceFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23193b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "set_ObjectAceFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAceFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_ObjectAceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_ObjectAceType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23193c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_ObjectAceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.set_ObjectAceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Guid)>(&::System::Security::AccessControl::ObjectAce::set_ObjectAceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23193cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "set_ObjectAceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_ObjectAceTypePresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_ObjectAceTypePresent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2319298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_ObjectAceTypePresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.GetBinaryForm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::ObjectAce::GetBinaryForm)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x23193d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::AccessControl::ObjectAce),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.ConvertType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AceType (*)(::System::Security::AccessControl::AceQualifier, bool)>(&::System::Security::AccessControl::ObjectAce::ConvertType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2319188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "ConvertType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.WriteGuid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Guid, ::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::ObjectAce::WriteGuid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2319540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "WriteGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.ReadGuid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Security::AccessControl::ObjectAce::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::ObjectAce::ReadGuid)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23192b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "ReadGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Security::AccessControl::ObjectAce::__set_object_ace_type(::System::Guid value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid ::System::Security::AccessControl::ObjectAce::__get_object_ace_type() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::AccessControl::ObjectAce::__set_inherited_object_type(::System::Guid value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid ::System::Security::AccessControl::ObjectAce::__get_inherited_object_type() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::AccessControl::ObjectAce::__set_object_ace_flags(::System::Security::AccessControl::ObjectAceFlags value)  {
::cordl_internals::setInstanceField<::System::Security::AccessControl::ObjectAceFlags, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::AccessControl::ObjectAceFlags>(value));
}
constexpr ::System::Security::AccessControl::ObjectAceFlags ::System::Security::AccessControl::ObjectAce::__get_object_ace_flags() const {
return ::cordl_internals::getInstanceField<::System::Security::AccessControl::ObjectAceFlags, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "aceFlags", ty: "::System::Security::AccessControl::AceFlags", modifiers: "", def_value: None }, CppParam { name: "qualifier", ty: "::System::Security::AccessControl::AceQualifier", modifiers: "", def_value: None }, CppParam { name: "accessMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sid", ty: "::System::Security::Principal::SecurityIdentifier", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::System::Security::AccessControl::ObjectAceFlags", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "inheritedType", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "isCallback", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "opaque", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::System::Security::AccessControl::ObjectAce::ObjectAce(::System::Security::AccessControl::AceFlags aceFlags, ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask, ::System::Security::Principal::SecurityIdentifier sid, ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type, ::System::Guid inheritedType, bool isCallback, ::ArrayW<uint8_t> opaque)  : ::System::Security::AccessControl::QualifiedAce(THROW_UNLESS(::il2cpp_utils::New<ObjectAce>(aceFlags, qualifier, accessMask, sid, flags, type, inheritedType, isCallback, opaque))) {}
 void ::System::Security::AccessControl::ObjectAce::_ctor(::System::Security::AccessControl::AceFlags aceFlags, ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask, ::System::Security::Principal::SecurityIdentifier sid, ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type, ::System::Guid inheritedType, bool isCallback, ::ArrayW<uint8_t> opaque)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aceFlags, qualifier, accessMask, sid, flags, type, inheritedType, isCallback, opaque);
}
// Ctor Parameters [CppParam { name: "binaryForm", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Security::AccessControl::ObjectAce::ObjectAce(::ArrayW<uint8_t> binaryForm, int32_t offset)  : ::System::Security::AccessControl::QualifiedAce(THROW_UNLESS(::il2cpp_utils::New<ObjectAce>(binaryForm, offset))) {}
 void ::System::Security::AccessControl::ObjectAce::_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryForm, offset);
}
 int32_t ::System::Security::AccessControl::ObjectAce::get_BinaryLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_BinaryLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Guid ::System::Security::AccessControl::ObjectAce::get_InheritedObjectAceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_InheritedObjectAceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::AccessControl::ObjectAce::set_InheritedObjectAceType(::System::Guid value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "set_InheritedObjectAceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Security::AccessControl::ObjectAce::get_InheritedObjectAceTypePresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_InheritedObjectAceTypePresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::AccessControl::ObjectAceFlags ::System::Security::AccessControl::ObjectAce::get_ObjectAceFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_ObjectAceFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::ObjectAceFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::AccessControl::ObjectAce::set_ObjectAceFlags(::System::Security::AccessControl::ObjectAceFlags value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "set_ObjectAceFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAceFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Guid ::System::Security::AccessControl::ObjectAce::get_ObjectAceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_ObjectAceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::AccessControl::ObjectAce::set_ObjectAceType(::System::Guid value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "set_ObjectAceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Security::AccessControl::ObjectAce::get_ObjectAceTypePresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "get_ObjectAceTypePresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::AccessControl::ObjectAce::GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "GetBinaryForm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryForm, offset);
}
 ::System::Security::AccessControl::AceType ::System::Security::AccessControl::ObjectAce::ConvertType(::System::Security::AccessControl::AceQualifier qualifier, bool isCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "ConvertType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceType, false>(nullptr, ___internal_method, qualifier, isCallback);
}
 void ::System::Security::AccessControl::ObjectAce::WriteGuid(::System::Guid val, ::ArrayW<uint8_t> buffer, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "WriteGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, val, buffer, offset);
}
 ::System::Guid ::System::Security::AccessControl::ObjectAce::ReadGuid(::ArrayW<uint8_t> buffer, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce>::get(),
                            "ReadGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(const_cast<void*>(instance), ___internal_method, buffer, offset);
}
} // end anonymous namespace
