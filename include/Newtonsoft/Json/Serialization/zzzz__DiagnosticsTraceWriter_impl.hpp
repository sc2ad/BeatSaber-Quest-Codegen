#pragma once
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__DiagnosticsTraceWriter_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.get_LevelFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceLevel (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)()>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::get_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f232c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            "get_LevelFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.set_LevelFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(::System::Diagnostics::TraceLevel)>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::set_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f2334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            "set_LevelFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.GetTraceEventType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceEventType (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(::System::Diagnostics::TraceLevel)>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::GetTraceEventType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24f233c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            "GetTraceEventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.Trace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(::System::Diagnostics::TraceLevel, ::StringW, ::System::Exception)>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::Trace)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x24f23ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            "Trace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)()>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f281c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Newtonsoft::Json::Serialization::ITraceWriter
constexpr  ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::operator ::Newtonsoft::Json::Serialization::ITraceWriter() const noexcept {
return ::Newtonsoft::Json::Serialization::ITraceWriter(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::__set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::TraceLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::TraceLevel>(value));
}
constexpr ::System::Diagnostics::TraceLevel ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::__get__LevelFilter_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::TraceLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Diagnostics::TraceLevel ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::get_LevelFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            "get_LevelFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceLevel, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::set_LevelFilter(::System::Diagnostics::TraceLevel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            "set_LevelFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Diagnostics::TraceEventType ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::GetTraceEventType(::System::Diagnostics::TraceLevel level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            "GetTraceEventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceEventType, false>(const_cast<void*>(instance), ___internal_method, level);
}
 void ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            "Trace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level, message, ex);
}
// Ctor Parameters []
 ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::DiagnosticsTraceWriter()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DiagnosticsTraceWriter>())) {}
 void ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
