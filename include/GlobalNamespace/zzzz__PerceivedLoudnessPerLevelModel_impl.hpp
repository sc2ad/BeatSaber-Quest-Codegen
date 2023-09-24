#pragma once
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: GlobalNamespace::PerceivedLoudnessPerLevelModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(GlobalNamespace::PerceivedLoudnessPerLevelSO)>(&GlobalNamespace::PerceivedLoudnessPerLevelModel::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21ee670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PerceivedLoudnessPerLevelSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PerceivedLoudnessPerLevelModel.ContainsLevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(&GlobalNamespace::PerceivedLoudnessPerLevelModel::ContainsLevelId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ee76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            "ContainsLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PerceivedLoudnessPerLevelModel.GetLoudnessCorrectionByLevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(&GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21ee7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            "GetLoudnessCorrectionByLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PerceivedLoudnessPerLevelModel.GetMaxSfxVolumeByLevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(&GlobalNamespace::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21ee860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            "GetMaxSfxVolumeByLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PerceivedLoudnessPerLevelModel.GetLoudnessByLevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(&GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21ee7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            "GetLoudnessByLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PerceivedLoudnessPerLevelModel::__set__loudnessLevelPerLevelId(System::Collections::Generic::Dictionary_2<::StringW,float_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,float_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,float_t> GlobalNamespace::PerceivedLoudnessPerLevelModel::__get__loudnessLevelPerLevelId() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PerceivedLoudnessPerLevelModel GlobalNamespace::PerceivedLoudnessPerLevelModel::New_ctor(GlobalNamespace::PerceivedLoudnessPerLevelSO loudnessPerLeveData)  {
GlobalNamespace::PerceivedLoudnessPerLevelModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::PerceivedLoudnessPerLevelModel>(loudnessPerLeveData))};
return o;
}
 void GlobalNamespace::PerceivedLoudnessPerLevelModel::_ctor(GlobalNamespace::PerceivedLoudnessPerLevelSO loudnessPerLeveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PerceivedLoudnessPerLevelSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, loudnessPerLeveData);
}
 bool GlobalNamespace::PerceivedLoudnessPerLevelModel::ContainsLevelId(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            "ContainsLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 float_t GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            "GetLoudnessCorrectionByLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 float_t GlobalNamespace::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            "GetMaxSfxVolumeByLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 float_t GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PerceivedLoudnessPerLevelModel>::get(),
                            "GetLoudnessByLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
