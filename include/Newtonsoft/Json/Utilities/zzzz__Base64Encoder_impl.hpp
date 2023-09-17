#pragma once
namespace {
#include "Newtonsoft/Json/Utilities/zzzz__Base64Encoder_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::Base64Encoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::Base64Encoder::*)(::System::IO::TextWriter)>(&::Newtonsoft::Json::Utilities::Base64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24e18b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::Base64Encoder.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::Base64Encoder::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Newtonsoft::Json::Utilities::Base64Encoder::Encode)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x24e1944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::Base64Encoder.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::Base64Encoder::*)()>(&::Newtonsoft::Json::Utilities::Base64Encoder::Flush)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24e1cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::Base64Encoder.WriteChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::Base64Encoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::Newtonsoft::Json::Utilities::Base64Encoder::WriteChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24e1c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Newtonsoft::Json::Utilities::Base64Encoder::__set__charsLine(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> ::Newtonsoft::Json::Utilities::Base64Encoder::__get__charsLine() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Utilities::Base64Encoder::__set__writer(::System::IO::TextWriter value)  {
::cordl_internals::setInstanceField<::System::IO::TextWriter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::TextWriter>(value));
}
constexpr ::System::IO::TextWriter ::Newtonsoft::Json::Utilities::Base64Encoder::__get__writer() const {
return ::cordl_internals::getInstanceField<::System::IO::TextWriter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Utilities::Base64Encoder::__set__leftOverBytes(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Newtonsoft::Json::Utilities::Base64Encoder::__get__leftOverBytes() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Utilities::Base64Encoder::__set__leftOverBytesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::Utilities::Base64Encoder::__get__leftOverBytesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "writer", ty: "::System::IO::TextWriter", modifiers: "", def_value: None }]
 ::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder(::System::IO::TextWriter writer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Base64Encoder>(writer))) {}
 void ::Newtonsoft::Json::Utilities::Base64Encoder::_ctor(::System::IO::TextWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void ::Newtonsoft::Json::Utilities::Base64Encoder::Encode(::ArrayW<uint8_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void ::Newtonsoft::Json::Utilities::Base64Encoder::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Newtonsoft::Json::Utilities::Base64Encoder::WriteChars(::ArrayW<char16_t> chars, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, chars, index, count);
}
} // end anonymous namespace
