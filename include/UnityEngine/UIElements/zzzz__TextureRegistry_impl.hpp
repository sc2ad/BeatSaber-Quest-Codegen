#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
// Ctor Parameters [CppParam { name: "texture", ty: "UnityEngine::Texture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "dynamic", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo::UnityEngine__UIElements__TextureRegistry__TextureInfo(UnityEngine::Texture texture, bool dynamic, int32_t refCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->texture = texture;
this->dynamic = dynamic;
this->refCount = refCount;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo::__set_texture(UnityEngine::Texture value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture, 0x0>(this->__instance, std::forward<UnityEngine::Texture>(value));
}
constexpr UnityEngine::Texture UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo::__get_texture() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo::__set_dynamic(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo::__get_dynamic() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo::__set_refCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo::__get_refCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::TextureRegistry.get_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::TextureRegistry (*)()>(&UnityEngine::UIElements::TextureRegistry::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d061a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TextureRegistry.GetTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture (UnityEngine::UIElements::TextureRegistry::*)(UnityEngine::UIElements::TextureId)>(&UnityEngine::UIElements::TextureRegistry::GetTexture)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2d06200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "GetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TextureRegistry.AllocAndAcquireDynamic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::TextureId (UnityEngine::UIElements::TextureRegistry::*)()>(&UnityEngine::UIElements::TextureRegistry::AllocAndAcquireDynamic)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d0633c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "AllocAndAcquireDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TextureRegistry.UpdateDynamic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextureRegistry::*)(UnityEngine::UIElements::TextureId, UnityEngine::Texture)>(&UnityEngine::UIElements::TextureRegistry::UpdateDynamic)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2d065b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "UpdateDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TextureRegistry.AllocAndAcquire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::TextureId (UnityEngine::UIElements::TextureRegistry::*)(UnityEngine::Texture, bool)>(&UnityEngine::UIElements::TextureRegistry::AllocAndAcquire)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2d06358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "AllocAndAcquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TextureRegistry.Acquire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::TextureId (UnityEngine::UIElements::TextureRegistry::*)(UnityEngine::Texture)>(&UnityEngine::UIElements::TextureRegistry::Acquire)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2d06764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TextureRegistry.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextureRegistry::*)(UnityEngine::UIElements::TextureId)>(&UnityEngine::UIElements::TextureRegistry::Release)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2d068a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TextureRegistry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextureRegistry::*)()>(&UnityEngine::UIElements::TextureRegistry::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d06a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::TextureRegistry::__set_m_Textures(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo> UnityEngine::UIElements::TextureRegistry::__get_m_Textures() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TextureRegistry__TextureInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::TextureRegistry::__set_m_TextureToId(System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::TextureId> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::TextureId>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::TextureId>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::TextureId> UnityEngine::UIElements::TextureRegistry::__get_m_TextureToId() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::TextureId>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::TextureRegistry::__set_m_FreeIds(System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId>>(value));
}
constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId> UnityEngine::UIElements::TextureRegistry::__get_m_FreeIds() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::TextureRegistry::__set__instance_k__BackingField(UnityEngine::UIElements::TextureRegistry value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::TextureRegistry, "<instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get>(std::forward<UnityEngine::UIElements::TextureRegistry>(value));
}
 UnityEngine::UIElements::TextureRegistry UnityEngine::UIElements::TextureRegistry::__get__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::TextureRegistry, "<instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get>();
}
 UnityEngine::UIElements::TextureRegistry UnityEngine::UIElements::TextureRegistry::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::TextureRegistry, false>(nullptr, ___internal_method);
}
 UnityEngine::Texture UnityEngine::UIElements::TextureRegistry::GetTexture(UnityEngine::UIElements::TextureId id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "GetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Texture, false>(const_cast<void*>(instance), ___internal_method, id);
}
 UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureRegistry::AllocAndAcquireDynamic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "AllocAndAcquireDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::TextureId, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::TextureRegistry::UpdateDynamic(UnityEngine::UIElements::TextureId id, UnityEngine::Texture texture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "UpdateDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id, texture);
}
 UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureRegistry::AllocAndAcquire(UnityEngine::Texture texture, bool dynamic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "AllocAndAcquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::TextureId, false>(const_cast<void*>(instance), ___internal_method, texture, dynamic);
}
 UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureRegistry::Acquire(UnityEngine::Texture tex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::TextureId, false>(const_cast<void*>(instance), ___internal_method, tex);
}
 void UnityEngine::UIElements::TextureRegistry::Release(UnityEngine::UIElements::TextureId id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id);
}
// Ctor Parameters []
 UnityEngine::UIElements::TextureRegistry::TextureRegistry()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TextureRegistry>())) {}
 void UnityEngine::UIElements::TextureRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TextureRegistry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
