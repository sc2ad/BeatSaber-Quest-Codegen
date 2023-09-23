#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Cryptography/zzzz__DerSequenceReader_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::System__Security__Cryptography__DerSequenceReader__DerTag(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::Boolean{1u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::Integer{2u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::BitString{3u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::OctetString{4u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::Null{5u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::ObjectIdentifier{6u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::UTF8String{12u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::Sequence{16u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::Set{17u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::PrintableString{19u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::T61String{20u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::IA5String{22u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::UTCTime{23u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::GeneralizedTime{24u};
constexpr System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag  System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag::BMPString{30u};
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::*)()>(&System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e3304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c._ReadT61String_b__45_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::*)()>(&System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::_ReadT61String_b__45_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27e330c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get(),
                            "<ReadT61String>b__45_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c._ReadT61String_b__45_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::*)()>(&System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::_ReadT61String_b__45_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27e3370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get(),
                            "<ReadT61String>b__45_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c._ReadTime_b__51_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeFormatInfo (System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::*)()>(&System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::_ReadTime_b__51_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27e33b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get(),
                            "<ReadTime>b__51_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::__set___9(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c value)  {
::cordl_internals::setStaticField<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get>(std::forward<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>(value));
}
 System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get>();
}
 void System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::__set___9__45_0(System::Func_1<System::Text::Encoding> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Text::Encoding>, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get>(std::forward<System::Func_1<System::Text::Encoding>>(value));
}
 System::Func_1<System::Text::Encoding> System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::__get___9__45_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Text::Encoding>, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get>();
}
 void System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::__set___9__45_1(System::Func_1<System::Text::Encoding> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Text::Encoding>, "<>9__45_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get>(std::forward<System::Func_1<System::Text::Encoding>>(value));
}
 System::Func_1<System::Text::Encoding> System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::__get___9__45_1()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Text::Encoding>, "<>9__45_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get>();
}
 void System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::__set___9__51_0(System::Func_1<System::Globalization::DateTimeFormatInfo> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Globalization::DateTimeFormatInfo>, "<>9__51_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get>(std::forward<System::Func_1<System::Globalization::DateTimeFormatInfo>>(value));
}
 System::Func_1<System::Globalization::DateTimeFormatInfo> System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::__get___9__51_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Globalization::DateTimeFormatInfo>, "<>9__51_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get>();
}
// Ctor Parameters []
 System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::System__Security__Cryptography__DerSequenceReader____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Security__Cryptography__DerSequenceReader____c>())) {}
 void System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Encoding System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::_ReadT61String_b__45_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get(),
                            "<ReadT61String>b__45_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Encoding System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::_ReadT61String_b__45_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get(),
                            "<ReadT61String>b__45_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::DateTimeFormatInfo System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c::_ReadTime_b__51_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c>::get(),
                            "<ReadTime>b__51_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DateTimeFormatInfo, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.set_ContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DerSequenceReader::*)(int32_t)>(&System::Security::Cryptography::DerSequenceReader::set_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e1d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "set_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DerSequenceReader::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::DerSequenceReader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27e1d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DerSequenceReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Security::Cryptography::DerSequenceReader::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e1d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DerSequenceReader::*)(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag, ::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Security::Cryptography::DerSequenceReader::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27e1d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.get_HasData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::get_HasData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27e1f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "get_HasData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.PeekTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::PeekTag)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27e1f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "PeekTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.SkipValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::SkipValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27e1fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "SkipValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadNextEncodedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadNextEncodedValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27e202c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadNextEncodedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadBoolean)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27e2204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadInteger)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27e22d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadIntegerBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadIntegerBytes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27e2384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadIntegerBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadBitString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadBitString)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x27e2454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadBitString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadOctetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadOctetString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27e259c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadOctetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadOidAsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadOidAsString)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x27e25b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadOidAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadUtf8String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadUtf8String)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27e2874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadUtf8String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadCollectionWithTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::DerSequenceReader (System::Security::Cryptography::DerSequenceReader::*)(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag)>(&System::Security::Cryptography::DerSequenceReader::ReadCollectionWithTag)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27e296c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadCollectionWithTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadSequence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::DerSequenceReader (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadSequence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e2adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadSequence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::DerSequenceReader (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e2ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadPrintableString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadPrintableString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27e2aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadPrintableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadIA5String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadIA5String)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27e2b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadIA5String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadT61String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadT61String)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x27e2bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadT61String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadX509Date
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadX509Date)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27e2ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadX509Date",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadUtcTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadUtcTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27e2f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadUtcTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadGeneralizedTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadGeneralizedTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27e2f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadGeneralizedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadBMPString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadBMPString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27e3220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadBMPString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.TrimTrailingNulls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Security::Cryptography::DerSequenceReader::TrimTrailingNulls)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27e28f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "TrimTrailingNulls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Security::Cryptography::DerSequenceReader::*)(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag, ::StringW)>(&System::Security::Cryptography::DerSequenceReader::ReadTime)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x27e2fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ReadContentAsBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::ReadContentAsBytes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27e23a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadContentAsBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.EatTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DerSequenceReader::*)(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag)>(&System::Security::Cryptography::DerSequenceReader::EatTag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27e1e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "EatTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.CheckTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag, ::ArrayW<uint8_t>, int32_t)>(&System::Security::Cryptography::DerSequenceReader::CheckTag)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27e2a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "CheckTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.EatLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Cryptography::DerSequenceReader::*)()>(&System::Security::Cryptography::DerSequenceReader::EatLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e1ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "EatLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::DerSequenceReader.ScanContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ByRef<int32_t>)>(&System::Security::Cryptography::DerSequenceReader::ScanContentLength)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x27e20e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ScanContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Security::Cryptography::DerSequenceReader::__set_s_validityDateTimeFormatInfo(System::Globalization::DateTimeFormatInfo value)  {
::cordl_internals::setStaticField<System::Globalization::DateTimeFormatInfo, "s_validityDateTimeFormatInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get>(std::forward<System::Globalization::DateTimeFormatInfo>(value));
}
 System::Globalization::DateTimeFormatInfo System::Security::Cryptography::DerSequenceReader::__get_s_validityDateTimeFormatInfo()  {
return ::cordl_internals::getStaticField<System::Globalization::DateTimeFormatInfo, "s_validityDateTimeFormatInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get>();
}
 void System::Security::Cryptography::DerSequenceReader::__set_s_utf8EncodingWithExceptionFallback(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "s_utf8EncodingWithExceptionFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Security::Cryptography::DerSequenceReader::__get_s_utf8EncodingWithExceptionFallback()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "s_utf8EncodingWithExceptionFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get>();
}
 void System::Security::Cryptography::DerSequenceReader::__set_s_latin1Encoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "s_latin1Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Security::Cryptography::DerSequenceReader::__get_s_latin1Encoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "s_latin1Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get>();
}
constexpr void System::Security::Cryptography::DerSequenceReader::__set__data(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::__get__data() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::DerSequenceReader::__set__end(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::DerSequenceReader::__get__end() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::DerSequenceReader::__set__position(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::DerSequenceReader::__get__position() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::DerSequenceReader::__set__ContentLength_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::DerSequenceReader::__get__ContentLength_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::Cryptography::DerSequenceReader::set_ContentLength(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "set_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 System::Security::Cryptography::DerSequenceReader::DerSequenceReader(::ArrayW<uint8_t> data)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DerSequenceReader>(data))) {}
 void System::Security::Cryptography::DerSequenceReader::_ctor(::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
 System::Security::Cryptography::DerSequenceReader::DerSequenceReader(::ArrayW<uint8_t> data, int32_t offset, int32_t length)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DerSequenceReader>(data, offset, length))) {}
 void System::Security::Cryptography::DerSequenceReader::_ctor(::ArrayW<uint8_t> data, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, offset, length);
}
// Ctor Parameters [CppParam { name: "tagToEat", ty: "System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
 System::Security::Cryptography::DerSequenceReader::DerSequenceReader(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag tagToEat, ::ArrayW<uint8_t> data, int32_t offset, int32_t length)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DerSequenceReader>(tagToEat, data, offset, length))) {}
 void System::Security::Cryptography::DerSequenceReader::_ctor(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag tagToEat, ::ArrayW<uint8_t> data, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tagToEat, data, offset, length);
}
 bool System::Security::Cryptography::DerSequenceReader::get_HasData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "get_HasData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t System::Security::Cryptography::DerSequenceReader::PeekTag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "PeekTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::DerSequenceReader::SkipValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "SkipValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadNextEncodedValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadNextEncodedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::Cryptography::DerSequenceReader::ReadBoolean()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Security::Cryptography::DerSequenceReader::ReadInteger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadIntegerBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadIntegerBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadBitString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadBitString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadOctetString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadOctetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Security::Cryptography::DerSequenceReader::ReadOidAsString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadOidAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Security::Cryptography::DerSequenceReader::ReadUtf8String()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadUtf8String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::DerSequenceReader System::Security::Cryptography::DerSequenceReader::ReadCollectionWithTag(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag expected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadCollectionWithTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::DerSequenceReader, false>(const_cast<void*>(instance), ___internal_method, expected);
}
 System::Security::Cryptography::DerSequenceReader System::Security::Cryptography::DerSequenceReader::ReadSequence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadSequence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::DerSequenceReader, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::DerSequenceReader System::Security::Cryptography::DerSequenceReader::ReadSet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::DerSequenceReader, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Security::Cryptography::DerSequenceReader::ReadPrintableString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadPrintableString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Security::Cryptography::DerSequenceReader::ReadIA5String()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadIA5String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Security::Cryptography::DerSequenceReader::ReadT61String()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadT61String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime System::Security::Cryptography::DerSequenceReader::ReadX509Date()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadX509Date",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime System::Security::Cryptography::DerSequenceReader::ReadUtcTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadUtcTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime System::Security::Cryptography::DerSequenceReader::ReadGeneralizedTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadGeneralizedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Security::Cryptography::DerSequenceReader::ReadBMPString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadBMPString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Security::Cryptography::DerSequenceReader::TrimTrailingNulls(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "TrimTrailingNulls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
 System::DateTime System::Security::Cryptography::DerSequenceReader::ReadTime(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag timeTag, ::StringW formatString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method, timeTag, formatString);
}
 ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadContentAsBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ReadContentAsBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::DerSequenceReader::EatTag(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag expected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "EatTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, expected);
}
 void System::Security::Cryptography::DerSequenceReader::CheckTag(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag expected, ::ArrayW<uint8_t> data, int32_t position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "CheckTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, expected, data, position);
}
 int32_t System::Security::Cryptography::DerSequenceReader::EatLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "EatLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Security::Cryptography::DerSequenceReader::ScanContentLength(::ArrayW<uint8_t> data, int32_t offset, int32_t end, ByRef<int32_t> bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::DerSequenceReader>::get(),
                            "ScanContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, offset, end, bytesConsumed);
}
