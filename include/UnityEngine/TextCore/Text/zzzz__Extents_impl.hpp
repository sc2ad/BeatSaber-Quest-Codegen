#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: UnityEngine::TextCore::Text::Extents.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextCore::Text::Extents::*)()>(&UnityEngine::TextCore::Text::Extents::ToString)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2bcb650;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::TextCore::Text::Extents),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::Extents>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "min", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::Text::Extents::Extents(UnityEngine::Vector2 min, UnityEngine::Vector2 max) noexcept : ::bs_hook::ValueTypeWrapper() {this->min = min;
this->max = max;
}
constexpr void UnityEngine::TextCore::Text::Extents::__set_min(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x0>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::TextCore::Text::Extents::__get_min() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::Extents::__set_max(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::TextCore::Text::Extents::__get_max() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
 ::StringW UnityEngine::TextCore::Text::Extents::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::Extents>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
