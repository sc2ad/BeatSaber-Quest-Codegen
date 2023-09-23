#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Entity_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EntityType_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::Entity.get_entityType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::EntityType (UnityEngine::ProBuilder::Entity::*)()>(&UnityEngine::ProBuilder::Entity::get_entityType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ac63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Entity>::get(),
                            "get_entityType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Entity.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Entity::*)()>(&UnityEngine::ProBuilder::Entity::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29ac644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Entity>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Entity.SetEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Entity::*)(UnityEngine::ProBuilder::EntityType)>(&UnityEngine::ProBuilder::Entity::SetEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ac70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Entity>::get(),
                            "SetEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EntityType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::Entity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Entity::*)()>(&UnityEngine::ProBuilder::Entity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ac714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Entity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Entity::__set_m_EntityType(UnityEngine::ProBuilder::EntityType value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::EntityType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::EntityType>(value));
}
constexpr UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::Entity::__get_m_EntityType() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::EntityType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::Entity::get_entityType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Entity>::get(),
                            "get_entityType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::EntityType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ProBuilder::Entity::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Entity>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ProBuilder::Entity::SetEntity(UnityEngine::ProBuilder::EntityType t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Entity>::get(),
                            "SetEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EntityType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
// Ctor Parameters []
 UnityEngine::ProBuilder::Entity::Entity()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<Entity>())) {}
 void UnityEngine::ProBuilder::Entity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::Entity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
