#pragma once
namespace {
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.SaveToOldFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData)>(&::GlobalNamespace::IPosesSerializer::SaveToOldFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IPosesSerializer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.SaveRecording
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPosesSerializer::*)(::StringW, ::GlobalNamespace::PosesRecordingData, bool)>(&::GlobalNamespace::IPosesSerializer::SaveRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IPosesSerializer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.LoadRecording
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PosesRecordingData (::GlobalNamespace::IPosesSerializer::*)(::StringW)>(&::GlobalNamespace::IPosesSerializer::LoadRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IPosesSerializer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.RecordingExists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IPosesSerializer::*)(::StringW)>(&::GlobalNamespace::IPosesSerializer::RecordingExists)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IPosesSerializer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPosesSerializer.RecordingCanBeCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IPosesSerializer::*)(::StringW)>(&::GlobalNamespace::IPosesSerializer::RecordingCanBeCreated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IPosesSerializer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::IPosesSerializer::SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                            "SaveToOldFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, data);
}
 void ::GlobalNamespace::IPosesSerializer::SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData data, bool saveToOldFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                            "SaveRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, data, saveToOldFormat);
}
 ::GlobalNamespace::PosesRecordingData ::GlobalNamespace::IPosesSerializer::LoadRecording(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                            "LoadRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingData, false>(const_cast<void*>(instance), ___internal_method, path);
}
 bool ::GlobalNamespace::IPosesSerializer::RecordingExists(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                            "RecordingExists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, path);
}
 bool ::GlobalNamespace::IPosesSerializer::RecordingCanBeCreated(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPosesSerializer>::get(),
                            "RecordingCanBeCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, path);
}
} // end anonymous namespace
