#pragma once
#include "Zenject/zzzz__TransformScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__TransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
//  Writing Method size for method: Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::*)(Zenject::BindInfo, Zenject::GameObjectCreationParameters)>(&Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d52f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::GameObjectCreationParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder.WithGameObjectName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::StringW)>(&Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::WithGameObjectName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d60bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            "WithGameObjectName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectInfo)  {
Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder o{THROW_UNLESS(::il2cpp_utils::New<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder>(bindInfo, gameObjectInfo))};
return o;
}
 void Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::GameObjectCreationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo, gameObjectInfo);
}
 Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::WithGameObjectName(::StringW gameObjectName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            "WithGameObjectName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, gameObjectName);
}
