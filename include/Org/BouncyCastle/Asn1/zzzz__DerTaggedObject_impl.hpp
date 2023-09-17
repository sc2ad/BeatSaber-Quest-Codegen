#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/zzzz__DerTaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerTaggedObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerTaggedObject::*)(int32_t, ::Org::BouncyCastle::Asn1::Asn1Encodable)>(&::Org::BouncyCastle::Asn1::DerTaggedObject::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x111fc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerTaggedObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerTaggedObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerTaggedObject::*)(bool, int32_t, ::Org::BouncyCastle::Asn1::Asn1Encodable)>(&::Org::BouncyCastle::Asn1::DerTaggedObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1128690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerTaggedObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerTaggedObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerTaggedObject::*)(int32_t)>(&::Org::BouncyCastle::Asn1::DerTaggedObject::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1133ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerTaggedObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerTaggedObject.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerTaggedObject::*)(::Org::BouncyCastle::Asn1::DerOutputStream)>(&::Org::BouncyCastle::Asn1::DerTaggedObject::Encode)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1133f30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Asn1::DerTaggedObject),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerTaggedObject>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::DerTaggedObject::DerTaggedObject(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable obj)  : ::Org::BouncyCastle::Asn1::Asn1TaggedObject(THROW_UNLESS(::il2cpp_utils::New<DerTaggedObject>(tagNo, obj))) {}
 void ::Org::BouncyCastle::Asn1::DerTaggedObject::_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerTaggedObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tagNo, obj);
}
// Ctor Parameters [CppParam { name: "explicitly", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::DerTaggedObject::DerTaggedObject(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable obj)  : ::Org::BouncyCastle::Asn1::Asn1TaggedObject(THROW_UNLESS(::il2cpp_utils::New<DerTaggedObject>(explicitly, tagNo, obj))) {}
 void ::Org::BouncyCastle::Asn1::DerTaggedObject::_ctor(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerTaggedObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, explicitly, tagNo, obj);
}
// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::DerTaggedObject::DerTaggedObject(int32_t tagNo)  : ::Org::BouncyCastle::Asn1::Asn1TaggedObject(THROW_UNLESS(::il2cpp_utils::New<DerTaggedObject>(tagNo))) {}
 void ::Org::BouncyCastle::Asn1::DerTaggedObject::_ctor(int32_t tagNo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerTaggedObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tagNo);
}
 void ::Org::BouncyCastle::Asn1::DerTaggedObject::Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerTaggedObject>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerOutputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, derOut);
}
} // end anonymous namespace
