#pragma once
#include "System/Net/zzzz__NetworkStreamWrapper_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__ResponseDescription_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/zzzz__ReceiveState_def.hpp"
#include "System/zzzz__Exception_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__CommandStream__PipelineInstruction::____System__Net__CommandStream__PipelineInstruction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::____System__Net__CommandStream__PipelineInstruction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__CommandStream__PipelineInstruction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::____System__Net__CommandStream__PipelineInstruction  ::System::Net::____System__Net__CommandStream__PipelineInstruction::Abort{0};
constexpr ::System::Net::____System__Net__CommandStream__PipelineInstruction  ::System::Net::____System__Net__CommandStream__PipelineInstruction::Advance{1};
constexpr ::System::Net::____System__Net__CommandStream__PipelineInstruction  ::System::Net::____System__Net__CommandStream__PipelineInstruction::Pause{2};
constexpr ::System::Net::____System__Net__CommandStream__PipelineInstruction  ::System::Net::____System__Net__CommandStream__PipelineInstruction::Reread{3};
constexpr ::System::Net::____System__Net__CommandStream__PipelineInstruction  ::System::Net::____System__Net__CommandStream__PipelineInstruction::GiveStream{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__CommandStream__PipelineEntryFlags::____System__Net__CommandStream__PipelineEntryFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::____System__Net__CommandStream__PipelineEntryFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__CommandStream__PipelineEntryFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::____System__Net__CommandStream__PipelineEntryFlags  ::System::Net::____System__Net__CommandStream__PipelineEntryFlags::UserCommand{1};
constexpr ::System::Net::____System__Net__CommandStream__PipelineEntryFlags  ::System::Net::____System__Net__CommandStream__PipelineEntryFlags::GiveDataStream{2};
constexpr ::System::Net::____System__Net__CommandStream__PipelineEntryFlags  ::System::Net::____System__Net__CommandStream__PipelineEntryFlags::CreateDataConnection{4};
constexpr ::System::Net::____System__Net__CommandStream__PipelineEntryFlags  ::System::Net::____System__Net__CommandStream__PipelineEntryFlags::DontLogParameter{8};
//  Writing Method size for method: ::System::Net::____System__Net__CommandStream__PipelineEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__CommandStream__PipelineEntry::*)(::StringW)>(&::System::Net::____System__Net__CommandStream__PipelineEntry::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27fd4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__CommandStream__PipelineEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__CommandStream__PipelineEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__CommandStream__PipelineEntry::*)(::StringW, ::System::Net::____System__Net__CommandStream__PipelineEntryFlags)>(&::System::Net::____System__Net__CommandStream__PipelineEntry::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27fd518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__CommandStream__PipelineEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__CommandStream__PipelineEntryFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__CommandStream__PipelineEntry.HasFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::____System__Net__CommandStream__PipelineEntry::*)(::System::Net::____System__Net__CommandStream__PipelineEntryFlags)>(&::System::Net::____System__Net__CommandStream__PipelineEntry::HasFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27fc1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__CommandStream__PipelineEntry>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__CommandStream__PipelineEntryFlags>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::____System__Net__CommandStream__PipelineEntry::__set_Command(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::____System__Net__CommandStream__PipelineEntry::__get_Command() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__CommandStream__PipelineEntry::__set_Flags(::System::Net::____System__Net__CommandStream__PipelineEntryFlags value)  {
::cordl_internals::setInstanceField<::System::Net::____System__Net__CommandStream__PipelineEntryFlags, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::____System__Net__CommandStream__PipelineEntryFlags>(value));
}
constexpr ::System::Net::____System__Net__CommandStream__PipelineEntryFlags ::System::Net::____System__Net__CommandStream__PipelineEntry::__get_Flags() const {
return ::cordl_internals::getInstanceField<::System::Net::____System__Net__CommandStream__PipelineEntryFlags, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "command", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Net::____System__Net__CommandStream__PipelineEntry::____System__Net__CommandStream__PipelineEntry(::StringW command)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__CommandStream__PipelineEntry>(command))) {}
 void ::System::Net::____System__Net__CommandStream__PipelineEntry::_ctor(::StringW command)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__CommandStream__PipelineEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, command);
}
// Ctor Parameters [CppParam { name: "command", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::System::Net::____System__Net__CommandStream__PipelineEntryFlags", modifiers: "", def_value: None }]
 ::System::Net::____System__Net__CommandStream__PipelineEntry::____System__Net__CommandStream__PipelineEntry(::StringW command, ::System::Net::____System__Net__CommandStream__PipelineEntryFlags flags)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__CommandStream__PipelineEntry>(command, flags))) {}
 void ::System::Net::____System__Net__CommandStream__PipelineEntry::_ctor(::StringW command, ::System::Net::____System__Net__CommandStream__PipelineEntryFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__CommandStream__PipelineEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__CommandStream__PipelineEntryFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, command, flags);
}
 bool ::System::Net::____System__Net__CommandStream__PipelineEntry::HasFlag(::System::Net::____System__Net__CommandStream__PipelineEntryFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__CommandStream__PipelineEntry>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__CommandStream__PipelineEntryFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, flags);
}
//  Writing Method size for method: ::System::Net::CommandStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Net::Sockets::TcpClient)>(&::System::Net::CommandStream::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27fb544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::TcpClient>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.Abort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Exception)>(&::System::Net::CommandStream::Abort)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x27fb65c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::CommandStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(bool)>(&::System::Net::CommandStream::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27fb884;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::CommandStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.InvokeRequestCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::bs_hook::Il2CppWrapperType)>(&::System::Net::CommandStream::InvokeRequestCallback)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27fb918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "InvokeRequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.get_RecoverableFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::get_RecoverableFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fb998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "get_RecoverableFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.MarkAsRecoverableFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::MarkAsRecoverableFailure)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27fb9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "MarkAsRecoverableFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.SubmitRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::System::Net::CommandStream::*)(::System::Net::WebRequest, bool, bool)>(&::System::Net::CommandStream::SubmitRequest)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27fb9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "SubmitRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ClearState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::ClearState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27fbfa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::CommandStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.BuildCommandsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry> (::System::Net::CommandStream::*)(::System::Net::WebRequest)>(&::System::Net::CommandStream::BuildCommandsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fbfb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::CommandStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.GenerateException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (::System::Net::CommandStream::*)(::StringW, ::System::Net::WebExceptionStatus, ::System::Exception)>(&::System::Net::CommandStream::GenerateException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27fbfb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "GenerateException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.GenerateException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (::System::Net::CommandStream::*)(::System::Net::FtpStatusCode, ::StringW, ::System::Exception)>(&::System::Net::CommandStream::GenerateException)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x27fc038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "GenerateException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.InitCommandPipeline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Net::WebRequest, ::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry>, bool)>(&::System::Net::CommandStream::InitCommandPipeline)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27fba38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "InitCommandPipeline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.CheckContinuePipeline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::CheckContinuePipeline)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27fc100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "CheckContinuePipeline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ContinueCommandPipeline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::ContinueCommandPipeline)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x27fbac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "ContinueCommandPipeline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PostSendCommandProcessing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)(ByRef<::System::IO::Stream>)>(&::System::Net::CommandStream::PostSendCommandProcessing)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27fc1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "PostSendCommandProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PostReadCommandProcessing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)(ByRef<::System::IO::Stream>)>(&::System::Net::CommandStream::PostReadCommandProcessing)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x27fc61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "PostReadCommandProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PipelineCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__CommandStream__PipelineInstruction (::System::Net::CommandStream::*)(::System::Net::____System__Net__CommandStream__PipelineEntry, ::System::Net::ResponseDescription, bool, ByRef<::System::IO::Stream>)>(&::System::Net::CommandStream::PipelineCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fc81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::CommandStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReadCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult)>(&::System::Net::CommandStream::ReadCallback)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x27fc824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.WriteCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult)>(&::System::Net::CommandStream::WriteCallback)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x27fd080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.get_Encoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fd334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "get_Encoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.set_Encoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Text::Encoding)>(&::System::Net::CommandStream::set_Encoding)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27fd33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "set_Encoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.CheckValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CommandStream::*)(::System::Net::ResponseDescription, ByRef<int32_t>, ByRef<int32_t>)>(&::System::Net::CommandStream::CheckValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fd374;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::CommandStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReceiveCommandResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ResponseDescription (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::ReceiveCommandResponse)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x27fc2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "ReceiveCommandResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReceiveCommandResponseCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CommandStream::*)(::System::Net::ReceiveState, int32_t)>(&::System::Net::CommandStream::ReceiveCommandResponseCallback)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x27fcb2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "ReceiveCommandResponseCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ReceiveState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::CommandStream::__set_s_writeCallbackDelegate(::System::AsyncCallback value)  {
::cordl_internals::setStaticField<::System::AsyncCallback, "s_writeCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get>(std::forward<::System::AsyncCallback>(value));
}
 ::System::AsyncCallback ::System::Net::CommandStream::__get_s_writeCallbackDelegate()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback, "s_writeCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get>();
}
 void ::System::Net::CommandStream::__set_s_readCallbackDelegate(::System::AsyncCallback value)  {
::cordl_internals::setStaticField<::System::AsyncCallback, "s_readCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get>(std::forward<::System::AsyncCallback>(value));
}
 ::System::AsyncCallback ::System::Net::CommandStream::__get_s_readCallbackDelegate()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback, "s_readCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get>();
}
constexpr void ::System::Net::CommandStream::__set__recoverableFailure(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::CommandStream::__get__recoverableFailure() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__request(::System::Net::WebRequest value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebRequest>(value));
}
constexpr ::System::Net::WebRequest ::System::Net::CommandStream::__get__request() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__isAsync(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::CommandStream::__get__isAsync() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__aborted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::CommandStream::__get__aborted() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__commands(::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry>>(value));
}
constexpr ::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry> ::System::Net::CommandStream::__get__commands() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::CommandStream::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__doRead(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::CommandStream::__get__doRead() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__doSend(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::CommandStream::__get__doSend() const {
return ::cordl_internals::getInstanceField<bool, 0x5d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__currentResponseDescription(::System::Net::ResponseDescription value)  {
::cordl_internals::setInstanceField<::System::Net::ResponseDescription, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::ResponseDescription>(value));
}
constexpr ::System::Net::ResponseDescription ::System::Net::CommandStream::__get__currentResponseDescription() const {
return ::cordl_internals::getInstanceField<::System::Net::ResponseDescription, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__abortReason(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::CommandStream::__get__abortReason() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__buffer(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::CommandStream::__get__buffer() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__encoding(::System::Text::Encoding value)  {
::cordl_internals::setInstanceField<::System::Text::Encoding, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::Encoding>(value));
}
constexpr ::System::Text::Encoding ::System::Net::CommandStream::__get__encoding() const {
return ::cordl_internals::getInstanceField<::System::Text::Encoding, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::CommandStream::__set__decoder(::System::Text::Decoder value)  {
::cordl_internals::setInstanceField<::System::Text::Decoder, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::Decoder>(value));
}
constexpr ::System::Text::Decoder ::System::Net::CommandStream::__get__decoder() const {
return ::cordl_internals::getInstanceField<::System::Text::Decoder, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "client", ty: "::System::Net::Sockets::TcpClient", modifiers: "", def_value: None }]
 ::System::Net::CommandStream::CommandStream(::System::Net::Sockets::TcpClient client)  : ::System::Net::NetworkStreamWrapper(THROW_UNLESS(::il2cpp_utils::New<CommandStream>(client))) {}
 void ::System::Net::CommandStream::_ctor(::System::Net::Sockets::TcpClient client)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::TcpClient>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, client);
}
 void ::System::Net::CommandStream::Abort(::System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void ::System::Net::CommandStream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void ::System::Net::CommandStream::InvokeRequestCallback(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "InvokeRequestCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool ::System::Net::CommandStream::get_RecoverableFailure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "get_RecoverableFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::CommandStream::MarkAsRecoverableFailure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "MarkAsRecoverableFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IO::Stream ::System::Net::CommandStream::SubmitRequest(::System::Net::WebRequest request, bool isAsync, bool readInitalResponseOnConnect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "SubmitRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, request, isAsync, readInitalResponseOnConnect);
}
 void ::System::Net::CommandStream::ClearState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "ClearState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry> ::System::Net::CommandStream::BuildCommandsList(::System::Net::WebRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "BuildCommandsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry>, false>(const_cast<void*>(instance), ___internal_method, request);
}
 ::System::Exception ::System::Net::CommandStream::GenerateException(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Exception innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "GenerateException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(const_cast<void*>(instance), ___internal_method, message, status, innerException);
}
 ::System::Exception ::System::Net::CommandStream::GenerateException(::System::Net::FtpStatusCode code, ::StringW statusDescription, ::System::Exception innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "GenerateException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(const_cast<void*>(instance), ___internal_method, code, statusDescription, innerException);
}
 void ::System::Net::CommandStream::InitCommandPipeline(::System::Net::WebRequest request, ::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry> commands, bool isAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "InitCommandPipeline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::____System__Net__CommandStream__PipelineEntry>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request, commands, isAsync);
}
 void ::System::Net::CommandStream::CheckContinuePipeline()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "CheckContinuePipeline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IO::Stream ::System::Net::CommandStream::ContinueCommandPipeline()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "ContinueCommandPipeline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::CommandStream::PostSendCommandProcessing(ByRef<::System::IO::Stream> stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "PostSendCommandProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 bool ::System::Net::CommandStream::PostReadCommandProcessing(ByRef<::System::IO::Stream> stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "PostReadCommandProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 ::System::Net::____System__Net__CommandStream__PipelineInstruction ::System::Net::CommandStream::PipelineCallback(::System::Net::____System__Net__CommandStream__PipelineEntry entry, ::System::Net::ResponseDescription response, bool timeout, ByRef<::System::IO::Stream> stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "PipelineCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__CommandStream__PipelineEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ResponseDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__CommandStream__PipelineInstruction, false>(const_cast<void*>(instance), ___internal_method, entry, response, timeout, stream);
}
 void ::System::Net::CommandStream::ReadCallback(::System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
 void ::System::Net::CommandStream::WriteCallback(::System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
 ::System::Text::Encoding ::System::Net::CommandStream::get_Encoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "get_Encoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::CommandStream::set_Encoding(::System::Text::Encoding value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "set_Encoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Net::CommandStream::CheckValid(::System::Net::ResponseDescription response, ByRef<int32_t> validThrough, ByRef<int32_t> completeLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "CheckValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ResponseDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, response, validThrough, completeLength);
}
 ::System::Net::ResponseDescription ::System::Net::CommandStream::ReceiveCommandResponse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "ReceiveCommandResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ResponseDescription, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::CommandStream::ReceiveCommandResponseCallback(::System::Net::ReceiveState state, int32_t bytesRead)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CommandStream>::get(),
                            "ReceiveCommandResponseCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ReceiveState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, bytesRead);
}
} // end anonymous namespace
