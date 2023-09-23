#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Attr/zzzz__ImageAttrib_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format  Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format::Jpeg{1u};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Attr::ImageAttrib._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x113cd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Attr::ImageAttrib._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)(bool, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x113cd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Attr::ImageAttrib._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)(Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x113ce04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Attr::ImageAttrib.ToByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ToByteArray)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x113ce7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            "ToByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Attr::ImageAttrib.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)()>(&Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x113cfc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Bcpg::Attr::ImageAttrib),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Attr::ImageAttrib.get_Encoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)()>(&Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x113cfd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Bcpg::Attr::ImageAttrib),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Attr::ImageAttrib.GetImageData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)()>(&Org::BouncyCastle::Bcpg::Attr::ImageAttrib::GetImageData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x113cfd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Bcpg::Attr::ImageAttrib),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__set_Zeroes(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Zeroes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get_Zeroes()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Zeroes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get>();
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__set_hdrLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get_hdrLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__set__encoding(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get__encoding() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__set_imageData(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get_imageData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ImageAttrib(::ArrayW<uint8_t> data)  : Org::BouncyCastle::Bcpg::UserAttributeSubpacket(THROW_UNLESS(::il2cpp_utils::New<ImageAttrib>(data))) {}
 void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor(::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
// Ctor Parameters [CppParam { name: "forceLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ImageAttrib(bool forceLongLength, ::ArrayW<uint8_t> data)  : Org::BouncyCastle::Bcpg::UserAttributeSubpacket(THROW_UNLESS(::il2cpp_utils::New<ImageAttrib>(forceLongLength, data))) {}
 void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor(bool forceLongLength, ::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forceLongLength, data);
}
// Ctor Parameters [CppParam { name: "imageType", ty: "Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format", modifiers: "", def_value: None }, CppParam { name: "imageData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ImageAttrib(Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format imageType, ::ArrayW<uint8_t> imageData)  : Org::BouncyCastle::Bcpg::UserAttributeSubpacket(THROW_UNLESS(::il2cpp_utils::New<ImageAttrib>(imageType, imageData))) {}
 void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor(Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format imageType, ::ArrayW<uint8_t> imageData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, imageType, imageData);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ToByteArray(Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format imageType, ::ArrayW<uint8_t> imageData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            "ToByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, imageType, imageData);
}
 int32_t Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Encoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            "get_Encoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::GetImageData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Attr::ImageAttrib>::get(),
                            "GetImageData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
