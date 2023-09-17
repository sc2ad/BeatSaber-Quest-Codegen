#pragma once
namespace {
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__BufferedDecoder_def.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__ITranslator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::*)(::Org::BouncyCastle::Utilities::Encoders::ITranslator, int32_t)>(&::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x10d0cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Encoders::ITranslator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder.ProcessByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::ProcessByte)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x10d0e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder>::get(),
                            "ProcessByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder.ProcessBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::ProcessBytes)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x10d0f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder>::get(),
                            "ProcessBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__set_bufOff(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__get_bufOff() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__set_translator(::Org::BouncyCastle::Utilities::Encoders::ITranslator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::Encoders::ITranslator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Utilities::Encoders::ITranslator>(value));
}
constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__get_translator() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Encoders::ITranslator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "translator", ty: "::Org::BouncyCastle::Utilities::Encoders::ITranslator", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::BufferedDecoder(::Org::BouncyCastle::Utilities::Encoders::ITranslator translator, int32_t bufferSize)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BufferedDecoder>(translator, bufferSize))) {}
 void ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::_ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator translator, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Encoders::ITranslator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, translator, bufferSize);
}
 int32_t ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder>::get(),
                            "ProcessByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, input, output, outOff);
}
 int32_t ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder>::get(),
                            "ProcessBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, input, inOff, len, outBytes, outOff);
}
} // end anonymous namespace
