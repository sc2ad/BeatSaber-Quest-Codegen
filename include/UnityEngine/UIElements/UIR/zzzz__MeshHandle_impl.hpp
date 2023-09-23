#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UIR::MeshHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::MeshHandle::*)()>(&UnityEngine::UIElements::UIR::MeshHandle::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c55048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::MeshHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_allocVerts(UnityEngine::UIElements::UIR::Alloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::Alloc>(value));
}
constexpr UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::MeshHandle::__get_allocVerts() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_allocIndices(UnityEngine::UIElements::UIR::Alloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::Alloc>(value));
}
constexpr UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::MeshHandle::__get_allocIndices() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_triangleCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::MeshHandle::__get_triangleCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_allocPage(UnityEngine::UIElements::UIR::Page value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Page, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::Page>(value));
}
constexpr UnityEngine::UIElements::UIR::Page UnityEngine::UIElements::UIR::MeshHandle::__get_allocPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Page, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_allocTime(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::MeshHandle::__get_allocTime() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::MeshHandle::__set_updateAllocID(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::MeshHandle::__get_updateAllocID() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::UIElements::UIR::MeshHandle::MeshHandle()  : UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::MeshHandle>(THROW_UNLESS(::il2cpp_utils::New<MeshHandle>())) {}
 void UnityEngine::UIElements::UIR::MeshHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::MeshHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
