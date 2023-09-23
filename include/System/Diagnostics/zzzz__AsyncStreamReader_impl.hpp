#pragma once
#include "System/Diagnostics/zzzz__AsyncStreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
//  Writing Method size for method: System::Diagnostics::AsyncStreamReader.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::AsyncStreamReader::*)()>(&System::Diagnostics::AsyncStreamReader::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27dc688;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Diagnostics::AsyncStreamReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::AsyncStreamReader>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::AsyncStreamReader.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::AsyncStreamReader::*)(bool)>(&System::Diagnostics::AsyncStreamReader::Dispose)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x27dc698;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Diagnostics::AsyncStreamReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::AsyncStreamReader>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::AsyncStreamReader.CancelOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::AsyncStreamReader::*)()>(&System::Diagnostics::AsyncStreamReader::CancelOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dca08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::AsyncStreamReader>::get(),
                            "CancelOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::AsyncStreamReader::__set_stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Diagnostics::AsyncStreamReader::__get_stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_encoding(System::Text::Encoding value)  {
::cordl_internals::setInstanceField<System::Text::Encoding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::Encoding>(value));
}
constexpr System::Text::Encoding System::Diagnostics::AsyncStreamReader::__get_encoding() const {
return ::cordl_internals::getInstanceField<System::Text::Encoding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_decoder(System::Text::Decoder value)  {
::cordl_internals::setInstanceField<System::Text::Decoder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::Decoder>(value));
}
constexpr System::Text::Decoder System::Diagnostics::AsyncStreamReader::__get_decoder() const {
return ::cordl_internals::getInstanceField<System::Text::Decoder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_byteBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Diagnostics::AsyncStreamReader::__get_byteBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_charBuffer(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> System::Diagnostics::AsyncStreamReader::__get_charBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_cancelOperation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Diagnostics::AsyncStreamReader::__get_cancelOperation() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_eofEvent(System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<System::Threading::ManualResetEvent, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ManualResetEvent>(value));
}
constexpr System::Threading::ManualResetEvent System::Diagnostics::AsyncStreamReader::__get_eofEvent() const {
return ::cordl_internals::getInstanceField<System::Threading::ManualResetEvent, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_syncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Diagnostics::AsyncStreamReader::__get_syncObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_asyncReadResult(System::IAsyncResult value)  {
::cordl_internals::setInstanceField<System::IAsyncResult, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IAsyncResult>(value));
}
constexpr System::IAsyncResult System::Diagnostics::AsyncStreamReader::__get_asyncReadResult() const {
return ::cordl_internals::getInstanceField<System::IAsyncResult, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Diagnostics::AsyncStreamReader::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::AsyncStreamReader>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Diagnostics::AsyncStreamReader::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::AsyncStreamReader>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Diagnostics::AsyncStreamReader::CancelOperation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::AsyncStreamReader>::get(),
                            "CancelOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
