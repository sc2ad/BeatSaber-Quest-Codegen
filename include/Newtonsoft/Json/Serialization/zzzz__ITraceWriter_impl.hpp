#pragma once
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ITraceWriter.get_LevelFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceLevel (::Newtonsoft::Json::Serialization::ITraceWriter::*)()>(&::Newtonsoft::Json::Serialization::ITraceWriter::get_LevelFilter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Serialization::ITraceWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ITraceWriter.Trace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ITraceWriter::*)(::System::Diagnostics::TraceLevel, ::StringW, ::System::Exception)>(&::Newtonsoft::Json::Serialization::ITraceWriter::Trace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Serialization::ITraceWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::System::Diagnostics::TraceLevel ::Newtonsoft::Json::Serialization::ITraceWriter::get_LevelFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter>::get(),
                            "get_LevelFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceLevel, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Newtonsoft::Json::Serialization::ITraceWriter::Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter>::get(),
                            "Trace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level, message, ex);
}
} // end anonymous namespace
