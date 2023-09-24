#pragma once
#include "DataModels/PlayerAvatar/zzzz__RandomizeAvatarColorMap_def.hpp"
//  Writing Method size for method: DataModels::PlayerAvatar::RandomizeAvatarColorMap.get_totalIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (DataModels::PlayerAvatar::RandomizeAvatarColorMap::*)()>(&DataModels::PlayerAvatar::RandomizeAvatarColorMap::get_totalIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d55f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::RandomizeAvatarColorMap>::get(),
                            "get_totalIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: DataModels::PlayerAvatar::RandomizeAvatarColorMap.get_colorIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (DataModels::PlayerAvatar::RandomizeAvatarColorMap::*)()>(&DataModels::PlayerAvatar::RandomizeAvatarColorMap::get_colorIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d55f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::RandomizeAvatarColorMap>::get(),
                            "get_colorIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: DataModels::PlayerAvatar::RandomizeAvatarColorMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DataModels::PlayerAvatar::RandomizeAvatarColorMap::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&DataModels::PlayerAvatar::RandomizeAvatarColorMap::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x21d5004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::RandomizeAvatarColorMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void DataModels::PlayerAvatar::RandomizeAvatarColorMap::__set__totalIndices_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t DataModels::PlayerAvatar::RandomizeAvatarColorMap::__get__totalIndices_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void DataModels::PlayerAvatar::RandomizeAvatarColorMap::__set__colorIndices_k__BackingField(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> DataModels::PlayerAvatar::RandomizeAvatarColorMap::__get__colorIndices_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t DataModels::PlayerAvatar::RandomizeAvatarColorMap::get_totalIndices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::RandomizeAvatarColorMap>::get(),
                            "get_totalIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<int32_t> DataModels::PlayerAvatar::RandomizeAvatarColorMap::get_colorIndices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::RandomizeAvatarColorMap>::get(),
                            "get_colorIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 DataModels::PlayerAvatar::RandomizeAvatarColorMap DataModels::PlayerAvatar::RandomizeAvatarColorMap::New_ctor(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex, int32_t glassesColorIndex, int32_t facialHairColorIndex, int32_t handsColorIndex, int32_t clothesPrimaryColorIndex, int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex)  {
DataModels::PlayerAvatar::RandomizeAvatarColorMap o{THROW_UNLESS(::il2cpp_utils::New<DataModels::PlayerAvatar::RandomizeAvatarColorMap>(headTopPrimaryColorIndex, headTopSecondaryColorIndex, glassesColorIndex, facialHairColorIndex, handsColorIndex, clothesPrimaryColorIndex, clothesSecondaryColorIndex, clothesDetailColorIndex))};
return o;
}
 void DataModels::PlayerAvatar::RandomizeAvatarColorMap::_ctor(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex, int32_t glassesColorIndex, int32_t facialHairColorIndex, int32_t handsColorIndex, int32_t clothesPrimaryColorIndex, int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataModels::PlayerAvatar::RandomizeAvatarColorMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headTopPrimaryColorIndex, headTopSecondaryColorIndex, glassesColorIndex, facialHairColorIndex, handsColorIndex, clothesPrimaryColorIndex, clothesSecondaryColorIndex, clothesDetailColorIndex);
}
