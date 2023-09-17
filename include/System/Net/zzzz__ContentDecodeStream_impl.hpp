#pragma once
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/zzzz__ContentDecodeStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__ContentDecodeStream__Mode::____System__Net__ContentDecodeStream__Mode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::____System__Net__ContentDecodeStream__Mode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__ContentDecodeStream__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::____System__Net__ContentDecodeStream__Mode  ::System::Net::____System__Net__ContentDecodeStream__Mode::GZip{0};
constexpr ::System::Net::____System__Net__ContentDecodeStream__Mode  ::System::Net::____System__Net__ContentDecodeStream__Mode::Deflate{1};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ContentDecodeStream (*)(::System::Net::WebOperation, ::System::IO::Stream, ::System::Net::____System__Net__ContentDecodeStream__Mode)>(&::System::Net::ContentDecodeStream::Create)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x282ac54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__ContentDecodeStream__Mode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.get_OriginalInnerStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::System::Net::ContentDecodeStream::*)()>(&::System::Net::ContentDecodeStream::get_OriginalInnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x282ad68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                            "get_OriginalInnerStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContentDecodeStream::*)(::System::Net::WebOperation, ::System::IO::Stream, ::System::IO::Stream)>(&::System::Net::ContentDecodeStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x282ad40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.ProcessReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::System::Net::ContentDecodeStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::ContentDecodeStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x282ad70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::ContentDecodeStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.FinishReading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::ContentDecodeStream::*)(::System::Threading::CancellationToken)>(&::System::Net::ContentDecodeStream::FinishReading)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x282ad94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::ContentDecodeStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Net::ContentDecodeStream::__set__OriginalInnerStream_k__BackingField(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::System::Net::ContentDecodeStream::__get__OriginalInnerStream_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::ContentDecodeStream ::System::Net::ContentDecodeStream::Create(::System::Net::WebOperation operation, ::System::IO::Stream innerStream, ::System::Net::____System__Net__ContentDecodeStream__Mode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__ContentDecodeStream__Mode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ContentDecodeStream, false>(nullptr, ___internal_method, operation, innerStream, mode);
}
 ::System::IO::Stream ::System::Net::ContentDecodeStream::get_OriginalInnerStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                            "get_OriginalInnerStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "decodeStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "originalInnerStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
 ::System::Net::ContentDecodeStream::ContentDecodeStream(::System::Net::WebOperation operation, ::System::IO::Stream decodeStream, ::System::IO::Stream originalInnerStream)  : ::System::Net::WebReadStream(THROW_UNLESS(::il2cpp_utils::New<ContentDecodeStream>(operation, decodeStream, originalInnerStream))) {}
 void ::System::Net::ContentDecodeStream::_ctor(::System::Net::WebOperation operation, ::System::IO::Stream decodeStream, ::System::IO::Stream originalInnerStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operation, decodeStream, originalInnerStream);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::System::Net::ContentDecodeStream::ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                            "ProcessReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::ContentDecodeStream::FinishReading(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream>::get(),
                            "FinishReading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
} // end anonymous namespace
