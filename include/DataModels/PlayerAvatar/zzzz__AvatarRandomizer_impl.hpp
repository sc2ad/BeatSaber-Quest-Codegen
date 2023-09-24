#pragma once
#include "DataModels/PlayerAvatar/zzzz__AvatarRandomizer_def.hpp"
#include "GlobalNamespace/zzzz__AvatarData_def.hpp"
#include "DataModels/PlayerAvatar/zzzz__RandomizeAvatarColorMap_def.hpp"
#include "GlobalNamespace/zzzz__AvatarPartsModel_def.hpp"
//  Writing Method size for method: DataModels::PlayerAvatar::AvatarRandomizer.RandomizeAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::AvatarData, GlobalNamespace::AvatarPartsModel)>(&DataModels::PlayerAvatar::AvatarRandomizer::RandomizeAll)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21d518c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::AvatarRandomizer>::get(),
                            "RandomizeAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarPartsModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: DataModels::PlayerAvatar::AvatarRandomizer.RandomizeModels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::AvatarData, GlobalNamespace::AvatarPartsModel)>(&DataModels::PlayerAvatar::AvatarRandomizer::RandomizeModels)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21d51f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::AvatarRandomizer>::get(),
                            "RandomizeModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarPartsModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: DataModels::PlayerAvatar::AvatarRandomizer.RandomizeColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::AvatarData)>(&DataModels::PlayerAvatar::AvatarRandomizer::RandomizeColors)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x21d5354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::AvatarRandomizer>::get(),
                            "RandomizeColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get()}
                        )));
    return ___internal_method;
  }
};
 void DataModels::PlayerAvatar::AvatarRandomizer::__set__randomizeColorsParamsCollection(::ArrayW<DataModels::PlayerAvatar::RandomizeAvatarColorMap> value)  {
::cordl_internals::setStaticField<::ArrayW<DataModels::PlayerAvatar::RandomizeAvatarColorMap>, "_randomizeColorsParamsCollection", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::AvatarRandomizer>::get>(std::forward<::ArrayW<DataModels::PlayerAvatar::RandomizeAvatarColorMap>>(value));
}
 ::ArrayW<DataModels::PlayerAvatar::RandomizeAvatarColorMap> DataModels::PlayerAvatar::AvatarRandomizer::__get__randomizeColorsParamsCollection()  {
return ::cordl_internals::getStaticField<::ArrayW<DataModels::PlayerAvatar::RandomizeAvatarColorMap>, "_randomizeColorsParamsCollection", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::AvatarRandomizer>::get>();
}
 void DataModels::PlayerAvatar::AvatarRandomizer::RandomizeAll(GlobalNamespace::AvatarData avatarData, GlobalNamespace::AvatarPartsModel avatarPartsModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::AvatarRandomizer>::get(),
                            "RandomizeAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarPartsModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, avatarData, avatarPartsModel);
}
 void DataModels::PlayerAvatar::AvatarRandomizer::RandomizeModels(GlobalNamespace::AvatarData avatarData, GlobalNamespace::AvatarPartsModel avatarPartsModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::AvatarRandomizer>::get(),
                            "RandomizeModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarPartsModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, avatarData, avatarPartsModel);
}
 void DataModels::PlayerAvatar::AvatarRandomizer::RandomizeColors(GlobalNamespace::AvatarData avatarData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::AvatarRandomizer>::get(),
                            "RandomizeColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, avatarData);
}
