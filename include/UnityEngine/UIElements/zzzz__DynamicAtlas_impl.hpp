#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlas_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasPage_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasCustomFilter_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFilters_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Allocator2D_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo (*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c3bfd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo)>(&UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::Reset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c3c070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c3c028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__set_page(UnityEngine::UIElements::DynamicAtlasPage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::DynamicAtlasPage, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::DynamicAtlasPage>(value));
}
constexpr UnityEngine::UIElements::DynamicAtlasPage UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__get_page() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::DynamicAtlasPage, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__set_counter(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__get_counter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__set_alloc(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D>(value));
}
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__get_alloc() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__set_rect(UnityEngine::RectInt value)  {
::cordl_internals::setInstanceField<UnityEngine::RectInt, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RectInt>(value));
}
constexpr UnityEngine::RectInt UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__get_rect() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectInt, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__set_pool(UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo> value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get>(std::forward<UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>>(value));
}
 UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo> UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::__get_pool()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get>();
}
 UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::Reset(UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, info);
}
// Ctor Parameters []
 UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::UnityEngine__UIElements__DynamicAtlas__TextureInfo()  : UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UIElements__DynamicAtlas__TextureInfo>())) {}
 void UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.get_isInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::DynamicAtlas::*)()>(&UnityEngine::UIElements::DynamicAtlas::get_isInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c3b424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "get_isInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.OnAssignedToPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)(UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::DynamicAtlas::OnAssignedToPanel)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2c3b444;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::DynamicAtlas),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.OnRemovedFromPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)(UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::DynamicAtlas::OnRemovedFromPanel)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c3b514;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::DynamicAtlas),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)()>(&UnityEngine::UIElements::DynamicAtlas::Reset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2c3b624;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::DynamicAtlas),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.InitPages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)()>(&UnityEngine::UIElements::DynamicAtlas::InitPages)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2c3b6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "InitPages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.DestroyPages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)()>(&UnityEngine::UIElements::DynamicAtlas::DestroyPages)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c3b5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "DestroyPages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.TryGetAtlas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::DynamicAtlas::*)(UnityEngine::UIElements::VisualElement, UnityEngine::Texture2D, ByRef<UnityEngine::UIElements::TextureId>, ByRef<UnityEngine::RectInt>)>(&UnityEngine::UIElements::DynamicAtlas::TryGetAtlas)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2c3b7d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::DynamicAtlas),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.ReturnAtlas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)(UnityEngine::UIElements::VisualElement, UnityEngine::Texture2D, UnityEngine::UIElements::TextureId)>(&UnityEngine::UIElements::DynamicAtlas::ReturnAtlas)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2c3bb34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::DynamicAtlas),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.OnUpdateDynamicTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)(UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::DynamicAtlas::OnUpdateDynamicTextures)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c3bc70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::DynamicAtlas),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.IsTextureFormatSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::TextureFormat)>(&UnityEngine::UIElements::DynamicAtlas::IsTextureFormatSupported)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c3bcd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "IsTextureFormatSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextureFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.IsTextureValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::DynamicAtlas::*)(UnityEngine::Texture2D, UnityEngine::FilterMode)>(&UnityEngine::UIElements::DynamicAtlas::IsTextureValid)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2c3bd0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::DynamicAtlas),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.set_minAtlasSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)(int32_t)>(&UnityEngine::UIElements::DynamicAtlas::set_minAtlasSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c3be34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_minAtlasSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.set_maxAtlasSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)(int32_t)>(&UnityEngine::UIElements::DynamicAtlas::set_maxAtlasSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c3be54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_maxAtlasSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.get_defaultFilters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::DynamicAtlasFilters (*)()>(&UnityEngine::UIElements::DynamicAtlas::get_defaultFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3be74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "get_defaultFilters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.set_activeFilters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)(UnityEngine::UIElements::DynamicAtlasFilters)>(&UnityEngine::UIElements::DynamicAtlas::set_activeFilters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c3be7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_activeFilters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DynamicAtlasFilters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.get_maxSubTextureSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::DynamicAtlas::*)()>(&UnityEngine::UIElements::DynamicAtlas::get_maxSubTextureSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3be2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "get_maxSubTextureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.set_maxSubTextureSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)(int32_t)>(&UnityEngine::UIElements::DynamicAtlas::set_maxSubTextureSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c3be9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_maxSubTextureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas.set_customFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)(UnityEngine::UIElements::DynamicAtlasCustomFilter)>(&UnityEngine::UIElements::DynamicAtlas::set_customFilter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c3bebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_customFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DynamicAtlasCustomFilter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::DynamicAtlas._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlas::*)()>(&UnityEngine::UIElements::DynamicAtlas::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c3bf04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_Database(System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo> UnityEngine::UIElements::DynamicAtlas::__get_m_Database() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::Texture,UnityEngine::UIElements::UnityEngine__UIElements__DynamicAtlas__TextureInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_PointPage(UnityEngine::UIElements::DynamicAtlasPage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::DynamicAtlasPage, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::DynamicAtlasPage>(value));
}
constexpr UnityEngine::UIElements::DynamicAtlasPage UnityEngine::UIElements::DynamicAtlas::__get_m_PointPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::DynamicAtlasPage, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_BilinearPage(UnityEngine::UIElements::DynamicAtlasPage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::DynamicAtlasPage, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::DynamicAtlasPage>(value));
}
constexpr UnityEngine::UIElements::DynamicAtlasPage UnityEngine::UIElements::DynamicAtlas::__get_m_BilinearPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::DynamicAtlasPage, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_ColorSpace(UnityEngine::ColorSpace value)  {
::cordl_internals::setInstanceField<UnityEngine::ColorSpace, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ColorSpace>(value));
}
constexpr UnityEngine::ColorSpace UnityEngine::UIElements::DynamicAtlas::__get_m_ColorSpace() const {
return ::cordl_internals::getInstanceField<UnityEngine::ColorSpace, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_Panels(System::Collections::Generic::List_1<UnityEngine::UIElements::IPanel> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::IPanel>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::IPanel>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::IPanel> UnityEngine::UIElements::DynamicAtlas::__get_m_Panels() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::IPanel>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_MinAtlasSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::DynamicAtlas::__get_m_MinAtlasSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_MaxAtlasSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::DynamicAtlas::__get_m_MaxAtlasSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_MaxSubTextureSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::DynamicAtlas::__get_m_MaxSubTextureSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_ActiveFilters(UnityEngine::UIElements::DynamicAtlasFilters value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::DynamicAtlasFilters, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::DynamicAtlasFilters>(value));
}
constexpr UnityEngine::UIElements::DynamicAtlasFilters UnityEngine::UIElements::DynamicAtlas::__get_m_ActiveFilters() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::DynamicAtlasFilters, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DynamicAtlas::__set_m_CustomFilter(UnityEngine::UIElements::DynamicAtlasCustomFilter value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::DynamicAtlasCustomFilter, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::DynamicAtlasCustomFilter>(value));
}
constexpr UnityEngine::UIElements::DynamicAtlasCustomFilter UnityEngine::UIElements::DynamicAtlas::__get_m_CustomFilter() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::DynamicAtlasCustomFilter, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::UIElements::DynamicAtlas::get_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "get_isInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::DynamicAtlas::OnAssignedToPanel(UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "OnAssignedToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, panel);
}
 void UnityEngine::UIElements::DynamicAtlas::OnRemovedFromPanel(UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "OnRemovedFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, panel);
}
 void UnityEngine::UIElements::DynamicAtlas::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::DynamicAtlas::InitPages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "InitPages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::DynamicAtlas::DestroyPages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "DestroyPages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::DynamicAtlas::TryGetAtlas(UnityEngine::UIElements::VisualElement ve, UnityEngine::Texture2D src, ByRef<UnityEngine::UIElements::TextureId> atlas, ByRef<UnityEngine::RectInt> atlasRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "TryGetAtlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::TextureId>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RectInt>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ve, src, atlas, atlasRect);
}
 void UnityEngine::UIElements::DynamicAtlas::ReturnAtlas(UnityEngine::UIElements::VisualElement ve, UnityEngine::Texture2D src, UnityEngine::UIElements::TextureId atlas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "ReturnAtlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, src, atlas);
}
 void UnityEngine::UIElements::DynamicAtlas::OnUpdateDynamicTextures(UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "OnUpdateDynamicTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, panel);
}
 bool UnityEngine::UIElements::DynamicAtlas::IsTextureFormatSupported(UnityEngine::TextureFormat format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "IsTextureFormatSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextureFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, format);
}
 bool UnityEngine::UIElements::DynamicAtlas::IsTextureValid(UnityEngine::Texture2D texture, UnityEngine::FilterMode atlasFilterMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "IsTextureValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::FilterMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, texture, atlasFilterMode);
}
 void UnityEngine::UIElements::DynamicAtlas::set_minAtlasSize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_minAtlasSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::DynamicAtlas::set_maxAtlasSize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_maxAtlasSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::DynamicAtlasFilters UnityEngine::UIElements::DynamicAtlas::get_defaultFilters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "get_defaultFilters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::DynamicAtlasFilters, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::DynamicAtlas::set_activeFilters(UnityEngine::UIElements::DynamicAtlasFilters value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_activeFilters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DynamicAtlasFilters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UIElements::DynamicAtlas::get_maxSubTextureSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "get_maxSubTextureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::DynamicAtlas::set_maxSubTextureSize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_maxSubTextureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::DynamicAtlas::set_customFilter(UnityEngine::UIElements::DynamicAtlasCustomFilter value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            "set_customFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DynamicAtlasCustomFilter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::UIElements::DynamicAtlas::DynamicAtlas()  : UnityEngine::UIElements::AtlasBase(THROW_UNLESS(::il2cpp_utils::New<DynamicAtlas>())) {}
 void UnityEngine::UIElements::DynamicAtlas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DynamicAtlas>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
