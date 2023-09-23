#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc8032/zzzz__Ed448_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IXof_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm  Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm::Ed448{0};
constexpr Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm  Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm::Ed448ph{1};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xfbabfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::__set_x(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::__get_x() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::__set_y(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::__get_y() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::__set_z(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::__get_z() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>())) {}
 void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp::*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xfbbecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp::__set_x(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp::__get_x() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp::__set_y(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp::__get_y() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp>())) {}
 void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CalculateS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CalculateS)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xfb8050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CalculateS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckContextVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckContextVar)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xfb8b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckContextVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xfb8b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xfb8c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckPointVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPointVar)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xfb8d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckPointVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckScalarVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckScalarVar)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xfb8f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckScalarVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CreatePrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IXof (*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreatePrehash)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xfb8ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CreatePrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CreateXof
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IXof (*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreateXof)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xfb9048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CreateXof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode16)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xfb90a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Decode16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode24
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode24)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xfb90e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Decode24",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xfb913c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Decode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xfb8e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Decode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.DecodePointVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, bool, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodePointVar)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xfb91a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "DecodePointVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.DecodeScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodeScalar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xfb81e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "DecodeScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Dom4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Crypto::IXof, uint8_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Dom4)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xfb93c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Dom4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Encode24
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode24)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xfb95f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Encode24",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Encode32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode32)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xfb825c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Encode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Encode56
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode56)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xfb9654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Encode56",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.EncodePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::EncodePoint)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xfb96d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "EncodePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.GeneratePrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Security::SecureRandom, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePrivateKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xfb9804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "GeneratePrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.GeneratePublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePublicKey)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xfb9820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "GeneratePublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.GetWnafVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int8_t> (*)(::ArrayW<uint32_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GetWnafVar)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xfb9b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "GetWnafVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Crypto::IXof, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0xfb9d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xfba174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xfba434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplVerify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplVerify)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0xfba6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ImplVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointAddVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddVar)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xfbadf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointAddVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointAddPrecomp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddPrecomp)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xfbb058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointAddPrecomp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointCopy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xfbb250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointDouble)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xfbb2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointExtendXY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExtendXY)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xfb93a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointExtendXY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointLookup)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xfbb474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointPrecompVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt> (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecompVar)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xfbb550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointPrecompVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointSetNeutral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointSetNeutral)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xfbb6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointSetNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Precompute)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0xfbb704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PruneScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PruneScalar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xfb9a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PruneScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ReduceScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ReduceScalar)> {
  constexpr static std::size_t size = 0x884;
  constexpr static std::size_t addrs = 0xfb82dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ReduceScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBase)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xfbbcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ScalarMultBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultBaseEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseEncoded)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xfb9a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ScalarMultBaseEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultBaseXY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseXY)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xfbbefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ScalarMultBaseXY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultStrausVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultStrausVar)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xfbac38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ScalarMultStrausVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Sign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xfbc050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Sign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xfbc10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xfbc1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xfbc290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, Org::BouncyCastle::Crypto::IXof, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xfbc364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, Org::BouncyCastle::Crypto::IXof, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xfbc530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Verify)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xfbc718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.VerifyPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xfbc7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "VerifyPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448.VerifyPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, Org::BouncyCastle::Crypto::IXof)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xfbc898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "VerifyPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed448._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Rfc8032::Ed448::*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed448::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfbcc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_PrehashSize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "PrehashSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_PrehashSize()  {
return ::cordl_internals::getStaticField<int32_t, "PrehashSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_PublicKeySize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "PublicKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_PublicKeySize()  {
return ::cordl_internals::getStaticField<int32_t, "PublicKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_SecretKeySize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "SecretKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_SecretKeySize()  {
return ::cordl_internals::getStaticField<int32_t, "SecretKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_SignatureSize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "SignatureSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_SignatureSize()  {
return ::cordl_internals::getStaticField<int32_t, "SignatureSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_Dom4Prefix(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Dom4Prefix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_Dom4Prefix()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Dom4Prefix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_P(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "P", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_P()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "P", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_L(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "L", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_L()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "L", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_N(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Math::BigInteger, "N", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_N()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Math::BigInteger, "N", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_B_x(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "B_x", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_B_x()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "B_x", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_B_y(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "B_y", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_B_y()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "B_y", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_precompLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "precompLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_precompLock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "precompLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_precompBaseTable(::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt> value)  {
::cordl_internals::setStaticField<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>, "precompBaseTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>>(value));
}
 ::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_precompBaseTable()  {
return ::cordl_internals::getStaticField<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>, "precompBaseTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__set_precompBase(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "precompBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::__get_precompBase()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "precompBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get>();
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CalculateS(::ArrayW<uint8_t> r, ::ArrayW<uint8_t> k, ::ArrayW<uint8_t> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CalculateS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, r, k, s);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckContextVar(::ArrayW<uint8_t> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckContextVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y);
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y, z);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPointVar(::ArrayW<uint8_t> p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckPointVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckScalarVar(::ArrayW<uint8_t> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CheckScalarVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
 Org::BouncyCastle::Crypto::IXof Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreatePrehash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CreatePrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IXof, false>(nullptr, ___internal_method);
}
 Org::BouncyCastle::Crypto::IXof Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreateXof()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "CreateXof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IXof, false>(nullptr, ___internal_method);
}
 uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode16(::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Decode16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
 uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode24(::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Decode24",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
 uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32(::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Decode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint32_t> n, int32_t nOff, int32_t nLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Decode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bs, bsOff, n, nOff, nLen);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodePointVar(::ArrayW<uint8_t> p, int32_t pOff, bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "DecodePointVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p, pOff, negate, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodeScalar(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "DecodeScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, kOff, n);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Dom4(Org::BouncyCastle::Crypto::IXof d, uint8_t x, ::ArrayW<uint8_t> y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Dom4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, x, y);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode24(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Encode24",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode32(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Encode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode56(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Encode56",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::EncodePoint(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p, ::ArrayW<uint8_t> r, int32_t rOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "EncodePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p, r, rOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePrivateKey(Org::BouncyCastle::Security::SecureRandom random, ::ArrayW<uint8_t> k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "GeneratePrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, random, k);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePublicKey(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "GeneratePublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff);
}
 ::ArrayW<int8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GetWnafVar(::ArrayW<uint32_t> n, int32_t width)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "GetWnafVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t>, false>(nullptr, ___internal_method, n, width);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(Org::BouncyCastle::Crypto::IXof d, ::ArrayW<uint8_t> h, ::ArrayW<uint8_t> s, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, h, s, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplVerify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ImplVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, phflag, m, mOff, mLen);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddVar(bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointAddVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, negate, p, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddPrecomp(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointAddPrecomp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p, r);
}
 Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointCopy(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt, false>(nullptr, ___internal_method, p);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointDouble(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExtendXY(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointExtendXY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointLookup(int32_t block, int32_t index, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, block, index, p);
}
 ::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecompVar(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointPrecompVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>, false>(nullptr, ___internal_method, p, count);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointSetNeutral(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PointSetNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Precompute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PruneScalar(::ArrayW<uint8_t> n, int32_t nOff, ::ArrayW<uint8_t> r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "PruneScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, nOff, r);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ReduceScalar(::ArrayW<uint8_t> n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ReduceScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, n);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBase(::ArrayW<uint8_t> k, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ScalarMultBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseEncoded(::ArrayW<uint8_t> k, ::ArrayW<uint8_t> r, int32_t rOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ScalarMultBaseEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, r, rOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseXY(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ScalarMultBaseXY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, kOff, x, y);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultStrausVar(::ArrayW<uint32_t> nb, ::ArrayW<uint32_t> np, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "ScalarMultStrausVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nb, np, p, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, ph, phOff, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, phOff, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, Org::BouncyCastle::Crypto::IXof ph, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, ph, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, Org::BouncyCastle::Crypto::IXof ph, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, sig, sigOff);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Verify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, m, mOff, mLen);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "VerifyPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph, phOff);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, Org::BouncyCastle::Crypto::IXof ph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            "VerifyPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IXof>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph);
}
// Ctor Parameters []
 Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Ed448()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Ed448>())) {}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed448>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
