#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Unity/Collections/zzzz__NativeArrayDisposeJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayDispose_def.hpp"
//  Writing Method size for method: Unity::Collections::NativeArrayDisposeJob.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::NativeArrayDisposeJob::*)()>(&Unity::Collections::NativeArrayDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b28538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::NativeArrayDisposeJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Unity::Jobs::IJob
constexpr  Unity::Collections::NativeArrayDisposeJob::operator Unity::Jobs::IJob() const {
return Unity::Jobs::IJob(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Data", ty: "Unity::Collections::NativeArrayDispose", modifiers: "", def_value: Some("{}") }]
constexpr Unity::Collections::NativeArrayDisposeJob::NativeArrayDisposeJob(Unity::Collections::NativeArrayDispose Data) noexcept : ::bs_hook::ValueTypeWrapper() {this->Data = Data;
}
constexpr void Unity::Collections::NativeArrayDisposeJob::__set_Data(Unity::Collections::NativeArrayDispose value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArrayDispose, 0x0>(this->__instance, std::forward<Unity::Collections::NativeArrayDispose>(value));
}
constexpr Unity::Collections::NativeArrayDispose Unity::Collections::NativeArrayDisposeJob::__get_Data() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArrayDispose, 0x0>(this->__instance);
}
 void Unity::Collections::NativeArrayDisposeJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::NativeArrayDisposeJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
