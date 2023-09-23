#pragma once
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeSliceUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
template<typename T>
 Unity::Collections::NativeSlice_1<T> Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::ConvertExistingDataToNativeSlice(void* dataPointer, int32_t stride, int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility>::get(),
                        "ConvertExistingDataToNativeSlice",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Unity::Collections::NativeSlice_1<T>, false>(nullptr, ___internal_method, dataPointer, stride, length);
}
template<typename T>
 void* Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::GetUnsafePtr(Unity::Collections::NativeSlice_1<T> nativeSlice)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility>::get(),
                        "GetUnsafePtr",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeSlice_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, nativeSlice);
}
template<typename T>
 void* Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility::GetUnsafeReadOnlyPtr(Unity::Collections::NativeSlice_1<T> nativeSlice)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility>::get(),
                        "GetUnsafeReadOnlyPtr",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeSlice_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, nativeSlice);
}
