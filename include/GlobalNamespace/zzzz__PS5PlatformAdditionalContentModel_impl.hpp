#pragma once
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_impl.hpp"
#include "GlobalNamespace/zzzz__PS5PlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::PS5PlatformAdditionalContentModel.GetLevelProductsModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PS5LevelProductsModelSO (GlobalNamespace::PS5PlatformAdditionalContentModel::*)()>(&GlobalNamespace::PS5PlatformAdditionalContentModel::GetLevelProductsModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a804;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PS5PlatformAdditionalContentModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5PlatformAdditionalContentModel>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS5PlatformAdditionalContentModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS5PlatformAdditionalContentModel::*)()>(&GlobalNamespace::PS5PlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x221a80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5PlatformAdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PS5PlatformAdditionalContentModel::__set__ps5LevelProductsModel(GlobalNamespace::PS5LevelProductsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PS5LevelProductsModelSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PS5LevelProductsModelSO>(value));
}
constexpr GlobalNamespace::PS5LevelProductsModelSO GlobalNamespace::PS5PlatformAdditionalContentModel::__get__ps5LevelProductsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PS5LevelProductsModelSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PS5LevelProductsModelSO GlobalNamespace::PS5PlatformAdditionalContentModel::GetLevelProductsModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5PlatformAdditionalContentModel>::get(),
                            "GetLevelProductsModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PS5LevelProductsModelSO, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::PS5PlatformAdditionalContentModel GlobalNamespace::PS5PlatformAdditionalContentModel::New_ctor()  {
GlobalNamespace::PS5PlatformAdditionalContentModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::PS5PlatformAdditionalContentModel>())};
return o;
}
 void GlobalNamespace::PS5PlatformAdditionalContentModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5PlatformAdditionalContentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
