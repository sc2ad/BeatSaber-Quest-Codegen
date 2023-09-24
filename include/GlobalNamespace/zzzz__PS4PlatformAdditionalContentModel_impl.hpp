#pragma once
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_impl.hpp"
#include "GlobalNamespace/zzzz__PS4PlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::PS4PlatformAdditionalContentModel.GetLevelProductsModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PS4LevelProductsModelSO (GlobalNamespace::PS4PlatformAdditionalContentModel::*)()>(&GlobalNamespace::PS4PlatformAdditionalContentModel::GetLevelProductsModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a6f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PS4PlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4PlatformAdditionalContentModel>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS4PlatformAdditionalContentModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4PlatformAdditionalContentModel::*)()>(&GlobalNamespace::PS4PlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x221a6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4PlatformAdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PS4PlatformAdditionalContentModel::__set__ps4LevelProductsModel(GlobalNamespace::PS4LevelProductsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PS4LevelProductsModelSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PS4LevelProductsModelSO>(value));
}
constexpr GlobalNamespace::PS4LevelProductsModelSO GlobalNamespace::PS4PlatformAdditionalContentModel::__get__ps4LevelProductsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PS4LevelProductsModelSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PS4LevelProductsModelSO GlobalNamespace::PS4PlatformAdditionalContentModel::GetLevelProductsModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4PlatformAdditionalContentModel>::get(),
                            "GetLevelProductsModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PS4LevelProductsModelSO, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::PS4PlatformAdditionalContentModel GlobalNamespace::PS4PlatformAdditionalContentModel::New_ctor()  {
GlobalNamespace::PS4PlatformAdditionalContentModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::PS4PlatformAdditionalContentModel>())};
return o;
}
 void GlobalNamespace::PS4PlatformAdditionalContentModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4PlatformAdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
