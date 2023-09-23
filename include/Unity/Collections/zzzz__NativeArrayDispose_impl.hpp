#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Unity/Collections/zzzz__NativeArrayDispose_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: Unity::Collections::NativeArrayDispose.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::NativeArrayDispose::*)()>(&Unity::Collections::NativeArrayDispose::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b284b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::NativeArrayDispose>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }]
constexpr Unity::Collections::NativeArrayDispose::NativeArrayDispose(void* m_Buffer, Unity::Collections::Allocator m_AllocatorLabel) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Buffer = m_Buffer;
this->m_AllocatorLabel = m_AllocatorLabel;
}
constexpr void Unity::Collections::NativeArrayDispose::__set_m_Buffer(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* Unity::Collections::NativeArrayDispose::__get_m_Buffer() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void Unity::Collections::NativeArrayDispose::__set_m_AllocatorLabel(Unity::Collections::Allocator value)  {
::cordl_internals::setInstanceField<Unity::Collections::Allocator, 0x8>(this->__instance, std::forward<Unity::Collections::Allocator>(value));
}
constexpr Unity::Collections::Allocator Unity::Collections::NativeArrayDispose::__get_m_AllocatorLabel() const {
return ::cordl_internals::getInstanceField<Unity::Collections::Allocator, 0x8>(this->__instance);
}
 void Unity::Collections::NativeArrayDispose::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::NativeArrayDispose>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
