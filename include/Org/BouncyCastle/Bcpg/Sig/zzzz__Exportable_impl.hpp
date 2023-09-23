#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__Exportable_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Sig::Exportable.BooleanToByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(bool)>(&Org::BouncyCastle::Bcpg::Sig::Exportable::BooleanToByteArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x113d2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::Exportable>::get(),
                            "BooleanToByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Sig::Exportable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::Sig::Exportable::*)(bool, bool, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::Sig::Exportable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x113d318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::Exportable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Sig::Exportable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::Sig::Exportable::*)(bool, bool)>(&Org::BouncyCastle::Bcpg::Sig::Exportable::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x113d360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::Exportable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Sig::Exportable.IsExportable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::Sig::Exportable::*)()>(&Org::BouncyCastle::Bcpg::Sig::Exportable::IsExportable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x113d3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::Exportable>::get(),
                            "IsExportable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Sig::Exportable::BooleanToByteArray(bool val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::Exportable>::get(),
                            "BooleanToByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, val);
}
// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::Sig::Exportable::Exportable(bool critical, bool isLongLength, ::ArrayW<uint8_t> data)  : Org::BouncyCastle::Bcpg::SignatureSubpacket(THROW_UNLESS(::il2cpp_utils::New<Exportable>(critical, isLongLength, data))) {}
 void Org::BouncyCastle::Bcpg::Sig::Exportable::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::Exportable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, critical, isLongLength, data);
}
// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isExportable", ty: "bool", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::Sig::Exportable::Exportable(bool critical, bool isExportable)  : Org::BouncyCastle::Bcpg::SignatureSubpacket(THROW_UNLESS(::il2cpp_utils::New<Exportable>(critical, isExportable))) {}
 void Org::BouncyCastle::Bcpg::Sig::Exportable::_ctor(bool critical, bool isExportable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::Exportable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, critical, isExportable);
}
 bool Org::BouncyCastle::Bcpg::Sig::Exportable::IsExportable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::Exportable>::get(),
                            "IsExportable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
