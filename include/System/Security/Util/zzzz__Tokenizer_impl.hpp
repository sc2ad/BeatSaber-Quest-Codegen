#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Security/Util/zzzz__TokenizerStream_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource::System__Security__Util__Tokenizer__TokenSource(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Util::System__Security__Util__Tokenizer__TokenSource::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::System__Security__Util__Tokenizer__TokenSource::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource  System::Security::Util::System__Security__Util__Tokenizer__TokenSource::UnicodeByteArray{0};
constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource  System::Security::Util::System__Security__Util__Tokenizer__TokenSource::UTF8ByteArray{1};
constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource  System::Security::Util::System__Security__Util__Tokenizer__TokenSource::ASCIIByteArray{2};
constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource  System::Security::Util::System__Security__Util__Tokenizer__TokenSource::CharArray{3};
constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource  System::Security::Util::System__Security__Util__Tokenizer__TokenSource::String{4};
constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource  System::Security::Util::System__Security__Util__Tokenizer__TokenSource::NestedStrings{5};
constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource  System::Security::Util::System__Security__Util__Tokenizer__TokenSource::Other{6};
//  Writing Method size for method: System::Security::Util::System__Security__Util__Tokenizer__StringMaker.HashString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&System::Security::Util::System__Security__Util__Tokenizer__StringMaker::HashString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22ea08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            "HashString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::System__Security__Util__Tokenizer__StringMaker.HashCharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<char16_t>, int32_t)>(&System::Security::Util::System__Security__Util__Tokenizer__StringMaker::HashCharArray)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22ea0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            "HashCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::System__Security__Util__Tokenizer__StringMaker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::System__Security__Util__Tokenizer__StringMaker::*)()>(&System::Security::Util::System__Security__Util__Tokenizer__StringMaker::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22ea154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::System__Security__Util__Tokenizer__StringMaker.CompareStringAndChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Util::System__Security__Util__Tokenizer__StringMaker::*)(::StringW, ::ArrayW<char16_t>, int32_t)>(&System::Security::Util::System__Security__Util__Tokenizer__StringMaker::CompareStringAndChars)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22ea1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            "CompareStringAndChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::System__Security__Util__Tokenizer__StringMaker.MakeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Util::System__Security__Util__Tokenizer__StringMaker::*)()>(&System::Security::Util::System__Security__Util__Tokenizer__StringMaker::MakeString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x22e475c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            "MakeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__set_aStrings(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__get_aStrings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__set_cStringsMax(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__get_cStringsMax() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__set_cStringsUsed(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__get_cStringsUsed() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__set__outStringBuilder(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__get__outStringBuilder() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__set__outChars(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__get__outChars() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__set__outIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::System__Security__Util__Tokenizer__StringMaker::__get__outIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint32_t System::Security::Util::System__Security__Util__Tokenizer__StringMaker::HashString(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            "HashString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, str);
}
 uint32_t System::Security::Util::System__Security__Util__Tokenizer__StringMaker::HashCharArray(::ArrayW<char16_t> a, int32_t l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            "HashCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, a, l);
}
 System::Security::Util::System__Security__Util__Tokenizer__StringMaker System::Security::Util::System__Security__Util__Tokenizer__StringMaker::New_ctor()  {
System::Security::Util::System__Security__Util__Tokenizer__StringMaker o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>())};
return o;
}
 void System::Security::Util::System__Security__Util__Tokenizer__StringMaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::Util::System__Security__Util__Tokenizer__StringMaker::CompareStringAndChars(::StringW str, ::ArrayW<char16_t> a, int32_t l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            "CompareStringAndChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, str, a, l);
}
 ::StringW System::Security::Util::System__Security__Util__Tokenizer__StringMaker::MakeString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>::get(),
                            "MakeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Security::Util::System__Security__Util__Tokenizer__ITokenReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Util::System__Security__Util__Tokenizer__ITokenReader::*)()>(&System::Security::Util::System__Security__Util__Tokenizer__ITokenReader::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Util::System__Security__Util__Tokenizer__ITokenReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__ITokenReader>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 int32_t System::Security::Util::System__Security__Util__Tokenizer__ITokenReader::Read()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__ITokenReader>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::*)(System::IO::StreamReader)>(&System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22e9e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::StreamReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::*)()>(&System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::Read)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22ea27c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader.get_NumCharEncountered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::*)()>(&System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::get_NumCharEncountered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ea2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader>::get(),
                            "get_NumCharEncountered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Security::Util::System__Security__Util__Tokenizer__ITokenReader
constexpr  System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::operator System::Security::Util::System__Security__Util__Tokenizer__ITokenReader() const noexcept {
return System::Security::Util::System__Security__Util__Tokenizer__ITokenReader(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::__set__in(System::IO::StreamReader value)  {
::cordl_internals::setInstanceField<System::IO::StreamReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::StreamReader>(value));
}
constexpr System::IO::StreamReader System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::__get__in() const {
return ::cordl_internals::getInstanceField<System::IO::StreamReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::__set__numCharRead(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::__get__numCharRead() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::New_ctor(System::IO::StreamReader input)  {
System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader>(input))};
return o;
}
 void System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::_ctor(System::IO::StreamReader input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::StreamReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 int32_t System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::Read()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader::get_NumCharEncountered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::System__Security__Util__Tokenizer__StreamTokenReader>::get(),
                            "get_NumCharEncountered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Security::Util::Tokenizer.BasicInitialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Tokenizer::*)()>(&System::Security::Util::Tokenizer::BasicInitialization)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22e9d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "BasicInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Tokenizer.Recycle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Tokenizer::*)()>(&System::Security::Util::Tokenizer::Recycle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22e9e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "Recycle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Tokenizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Tokenizer::*)(::StringW)>(&System::Security::Util::Tokenizer::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22e9d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Tokenizer.ChangeFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Tokenizer::*)(System::Text::Encoding)>(&System::Security::Util::Tokenizer::ChangeFormat)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x22e95e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "ChangeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Tokenizer.GetTokens
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Tokenizer::*)(System::Security::Util::TokenizerStream, int32_t, bool)>(&System::Security::Util::Tokenizer::GetTokens)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x22e8da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "GetTokens",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Util::TokenizerStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Tokenizer.GetStringToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Util::Tokenizer::*)()>(&System::Security::Util::Tokenizer::GetStringToken)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22e9f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "GetStringToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Util::Tokenizer::__set_LineNo(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::Tokenizer::__get_LineNo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inProcessingTag(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::Tokenizer::__get__inProcessingTag() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inBytes(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Util::Tokenizer::__get__inBytes() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inChars(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> System::Security::Util::Tokenizer::__get__inChars() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Security::Util::Tokenizer::__get__inString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::Tokenizer::__get__inIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::Tokenizer::__get__inSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inSavedCharacter(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::Tokenizer::__get__inSavedCharacter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inTokenSource(System::Security::Util::System__Security__Util__Tokenizer__TokenSource value)  {
::cordl_internals::setInstanceField<System::Security::Util::System__Security__Util__Tokenizer__TokenSource, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Util::System__Security__Util__Tokenizer__TokenSource>(value));
}
constexpr System::Security::Util::System__Security__Util__Tokenizer__TokenSource System::Security::Util::Tokenizer::__get__inTokenSource() const {
return ::cordl_internals::getInstanceField<System::Security::Util::System__Security__Util__Tokenizer__TokenSource, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inTokenReader(System::Security::Util::System__Security__Util__Tokenizer__ITokenReader value)  {
::cordl_internals::setInstanceField<System::Security::Util::System__Security__Util__Tokenizer__ITokenReader, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Util::System__Security__Util__Tokenizer__ITokenReader>(value));
}
constexpr System::Security::Util::System__Security__Util__Tokenizer__ITokenReader System::Security::Util::Tokenizer::__get__inTokenReader() const {
return ::cordl_internals::getInstanceField<System::Security::Util::System__Security__Util__Tokenizer__ITokenReader, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__maker(System::Security::Util::System__Security__Util__Tokenizer__StringMaker value)  {
::cordl_internals::setInstanceField<System::Security::Util::System__Security__Util__Tokenizer__StringMaker, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Util::System__Security__Util__Tokenizer__StringMaker>(value));
}
constexpr System::Security::Util::System__Security__Util__Tokenizer__StringMaker System::Security::Util::Tokenizer::__get__maker() const {
return ::cordl_internals::getInstanceField<System::Security::Util::System__Security__Util__Tokenizer__StringMaker, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__searchStrings(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Security::Util::Tokenizer::__get__searchStrings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__replaceStrings(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Security::Util::Tokenizer::__get__replaceStrings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inNestedIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::Tokenizer::__get__inNestedIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inNestedSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Util::Tokenizer::__get__inNestedSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Tokenizer::__set__inNestedString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Security::Util::Tokenizer::__get__inNestedString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::Util::Tokenizer::BasicInitialization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "BasicInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Util::Tokenizer::Recycle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "Recycle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Util::Tokenizer System::Security::Util::Tokenizer::New_ctor(::StringW input)  {
System::Security::Util::Tokenizer o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Util::Tokenizer>(input))};
return o;
}
 void System::Security::Util::Tokenizer::_ctor(::StringW input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void System::Security::Util::Tokenizer::ChangeFormat(System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "ChangeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 void System::Security::Util::Tokenizer::GetTokens(System::Security::Util::TokenizerStream stream, int32_t maxNum, bool endAfterKet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "GetTokens",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Util::TokenizerStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, maxNum, endAfterKet);
}
 ::StringW System::Security::Util::Tokenizer::GetStringToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Tokenizer>::get(),
                            "GetStringToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
