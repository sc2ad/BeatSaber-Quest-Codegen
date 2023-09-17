#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__MonoChunkParser__State::____System__Net__MonoChunkParser__State(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::____System__Net__MonoChunkParser__State::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__MonoChunkParser__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::____System__Net__MonoChunkParser__State  ::System::Net::____System__Net__MonoChunkParser__State::None{0};
constexpr ::System::Net::____System__Net__MonoChunkParser__State  ::System::Net::____System__Net__MonoChunkParser__State::PartialSize{1};
constexpr ::System::Net::____System__Net__MonoChunkParser__State  ::System::Net::____System__Net__MonoChunkParser__State::Body{2};
constexpr ::System::Net::____System__Net__MonoChunkParser__State  ::System::Net::____System__Net__MonoChunkParser__State::BodyFinished{3};
constexpr ::System::Net::____System__Net__MonoChunkParser__State  ::System::Net::____System__Net__MonoChunkParser__State::Trailer{4};
//  Writing Method size for method: ::System::Net::____System__Net__MonoChunkParser__Chunk._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__MonoChunkParser__Chunk::*)(::ArrayW<uint8_t>)>(&::System::Net::____System__Net__MonoChunkParser__Chunk::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28421f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkParser__Chunk>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__MonoChunkParser__Chunk.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::____System__Net__MonoChunkParser__Chunk::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::____System__Net__MonoChunkParser__Chunk::Read)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28416f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkParser__Chunk>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::____System__Net__MonoChunkParser__Chunk::__set_Bytes(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__MonoChunkParser__Chunk::__get_Bytes() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkParser__Chunk::__set_Offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__MonoChunkParser__Chunk::__get_Offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "chunk", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::System::Net::____System__Net__MonoChunkParser__Chunk::____System__Net__MonoChunkParser__Chunk(::ArrayW<uint8_t> chunk)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__MonoChunkParser__Chunk>(chunk))) {}
 void ::System::Net::____System__Net__MonoChunkParser__Chunk::_ctor(::ArrayW<uint8_t> chunk)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkParser__Chunk>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, chunk);
}
 int32_t ::System::Net::____System__Net__MonoChunkParser__Chunk::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkParser__Chunk>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
//  Writing Method size for method: ::System::Net::MonoChunkParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::MonoChunkParser::*)(::System::Net::WebHeaderCollection)>(&::System::Net::MonoChunkParser::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2841324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::MonoChunkParser::Read)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28413dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadFromChunks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::MonoChunkParser::ReadFromChunks)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x28413e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ReadFromChunks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::MonoChunkParser::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2841758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.InternalWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ByRef<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::InternalWrite)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2841778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "InternalWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_WantMore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_WantMore)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28420c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "get_WantMore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_DataAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_DataAvailable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x28420e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "get_DataAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_ChunkLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_ChunkLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28421e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "get_ChunkLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadBody
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__MonoChunkParser__State (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ByRef<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::ReadBody)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2841bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ReadBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.GetChunkSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__MonoChunkParser__State (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ByRef<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::GetChunkSize)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x28418b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "GetChunkSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.RemoveChunkExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::MonoChunkParser::RemoveChunkExtension)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2842274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "RemoveChunkExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadCRLF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__MonoChunkParser__State (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ByRef<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::ReadCRLF)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2841cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ReadCRLF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadTrailer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__MonoChunkParser__State (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ByRef<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::ReadTrailer)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2841df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ReadTrailer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ThrowProtocolViolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Net::MonoChunkParser::ThrowProtocolViolation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x284221c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ThrowProtocolViolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::MonoChunkParser::__set_headers(::System::Net::WebHeaderCollection value)  {
::cordl_internals::setInstanceField<::System::Net::WebHeaderCollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebHeaderCollection>(value));
}
constexpr ::System::Net::WebHeaderCollection ::System::Net::MonoChunkParser::__get_headers() const {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkParser::__set_chunkSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::MonoChunkParser::__get_chunkSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkParser::__set_chunkRead(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::MonoChunkParser::__get_chunkRead() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkParser::__set_totalWritten(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::MonoChunkParser::__get_totalWritten() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkParser::__set_state(::System::Net::____System__Net__MonoChunkParser__State value)  {
::cordl_internals::setInstanceField<::System::Net::____System__Net__MonoChunkParser__State, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::____System__Net__MonoChunkParser__State>(value));
}
constexpr ::System::Net::____System__Net__MonoChunkParser__State ::System::Net::MonoChunkParser::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Net::____System__Net__MonoChunkParser__State, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkParser::__set_saved(::System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::StringBuilder>(value));
}
constexpr ::System::Text::StringBuilder ::System::Net::MonoChunkParser::__get_saved() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkParser::__set_sawCR(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::MonoChunkParser::__get_sawCR() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkParser::__set_gotit(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::MonoChunkParser::__get_gotit() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkParser::__set_trailerState(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::MonoChunkParser::__get_trailerState() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkParser::__set_chunks(::System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::ArrayList>(value));
}
constexpr ::System::Collections::ArrayList ::System::Net::MonoChunkParser::__get_chunks() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "headers", ty: "::System::Net::WebHeaderCollection", modifiers: "", def_value: None }]
 ::System::Net::MonoChunkParser::MonoChunkParser(::System::Net::WebHeaderCollection headers)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MonoChunkParser>(headers))) {}
 void ::System::Net::MonoChunkParser::_ctor(::System::Net::WebHeaderCollection headers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headers);
}
 int32_t ::System::Net::MonoChunkParser::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 int32_t ::System::Net::MonoChunkParser::ReadFromChunks(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ReadFromChunks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 void ::System::Net::MonoChunkParser::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 void ::System::Net::MonoChunkParser::InternalWrite(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "InternalWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 bool ::System::Net::MonoChunkParser::get_WantMore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "get_WantMore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::MonoChunkParser::get_DataAvailable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "get_DataAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Net::MonoChunkParser::get_ChunkLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "get_ChunkLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::____System__Net__MonoChunkParser__State ::System::Net::MonoChunkParser::ReadBody(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ReadBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__MonoChunkParser__State, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 ::System::Net::____System__Net__MonoChunkParser__State ::System::Net::MonoChunkParser::GetChunkSize(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "GetChunkSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__MonoChunkParser__State, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 ::StringW ::System::Net::MonoChunkParser::RemoveChunkExtension(::StringW input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "RemoveChunkExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, input);
}
 ::System::Net::____System__Net__MonoChunkParser__State ::System::Net::MonoChunkParser::ReadCRLF(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ReadCRLF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__MonoChunkParser__State, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 ::System::Net::____System__Net__MonoChunkParser__State ::System::Net::MonoChunkParser::ReadTrailer(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ReadTrailer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__MonoChunkParser__State, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 void ::System::Net::MonoChunkParser::ThrowProtocolViolation(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser>::get(),
                            "ThrowProtocolViolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
} // end anonymous namespace
