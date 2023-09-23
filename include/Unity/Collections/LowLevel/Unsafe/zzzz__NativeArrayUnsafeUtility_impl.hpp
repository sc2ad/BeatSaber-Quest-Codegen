#pragma once
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeArrayUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
template<typename T>
 Unity::Collections::NativeArray_1<T> Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray(void* dataPointer, int32_t length, Unity::Collections::Allocator allocator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility>::get(),
                        "ConvertExistingDataToNativeArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::Allocator>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Unity::Collections::NativeArray_1<T>, false>(nullptr, ___internal_method, dataPointer, length, allocator);
}
template<typename T>
 void* Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::GetUnsafePtr(Unity::Collections::NativeArray_1<T> nativeArray)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility>::get(),
                        "GetUnsafePtr",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, nativeArray);
}
template<typename T>
 void* Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr(Unity::Collections::NativeArray_1<T> nativeArray)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility>::get(),
                        "GetUnsafeReadOnlyPtr",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, nativeArray);
}
template<typename T>
 void* Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::GetUnsafeBufferPointerWithoutChecks(Unity::Collections::NativeArray_1<T> nativeArray)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility>::get(),
                        "GetUnsafeBufferPointerWithoutChecks",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, nativeArray);
}
