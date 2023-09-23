#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Threading/zzzz__CancellationCallbackCoreWorkArguments_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
//  Writing Method size for method: System::Threading::CancellationCallbackCoreWorkArguments._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationCallbackCoreWorkArguments::*)(System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo>, int32_t)>(&System::Threading::CancellationCallbackCoreWorkArguments::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a607c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackCoreWorkArguments>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_currArrayFragment", ty: "System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_currArrayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::CancellationCallbackCoreWorkArguments::CancellationCallbackCoreWorkArguments(System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo> _currArrayFragment, int32_t _currArrayIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->_currArrayFragment = _currArrayFragment;
this->_currArrayIndex = _currArrayIndex;
}
constexpr void System::Threading::CancellationCallbackCoreWorkArguments::__set__currArrayFragment(System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo> value)  {
::cordl_internals::setInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo>, 0x0>(this->__instance, std::forward<System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo>>(value));
}
constexpr System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo> System::Threading::CancellationCallbackCoreWorkArguments::__get__currArrayFragment() const {
return ::cordl_internals::getInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo>, 0x0>(this->__instance);
}
constexpr void System::Threading::CancellationCallbackCoreWorkArguments::__set__currArrayIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::CancellationCallbackCoreWorkArguments::__get__currArrayIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 void System::Threading::CancellationCallbackCoreWorkArguments::_ctor(System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo> currArrayFragment, int32_t currArrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackCoreWorkArguments>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SparselyPopulatedArrayFragment_1<System::Threading::CancellationCallbackInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, currArrayFragment, currArrayIndex);
}
