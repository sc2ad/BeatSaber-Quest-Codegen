#pragma once
namespace {
#include "GlobalNamespace/zzzz__RecordingConverter_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingConverter::*)(::GlobalNamespace::IBeatSaberLogger)>(&::GlobalNamespace::RecordingConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21a7078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingConverter.SaveToOldFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingConverter::*)(::StringW, ::GlobalNamespace::PosesRecordingData)>(&::GlobalNamespace::RecordingConverter::SaveToOldFormat)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21a826c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingConverter>::get(),
                            "SaveToOldFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::RecordingConverter::__set__logger(::GlobalNamespace::IBeatSaberLogger value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatSaberLogger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatSaberLogger>(value));
}
constexpr ::GlobalNamespace::IBeatSaberLogger ::GlobalNamespace::RecordingConverter::__get__logger() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatSaberLogger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "logger", ty: "::GlobalNamespace::IBeatSaberLogger", modifiers: "", def_value: None }]
 ::GlobalNamespace::RecordingConverter::RecordingConverter(::GlobalNamespace::IBeatSaberLogger logger)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RecordingConverter>(logger))) {}
 void ::GlobalNamespace::RecordingConverter::_ctor(::GlobalNamespace::IBeatSaberLogger logger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, logger);
}
 void ::GlobalNamespace::RecordingConverter::SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingConverter>::get(),
                            "SaveToOldFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, data);
}
} // end anonymous namespace
