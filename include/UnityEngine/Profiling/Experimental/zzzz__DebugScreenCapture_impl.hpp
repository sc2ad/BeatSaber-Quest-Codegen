#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Profiling/Experimental/zzzz__DebugScreenCapture_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: UnityEngine::Profiling::Experimental::DebugScreenCapture.set_rawImageDataReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Profiling::Experimental::DebugScreenCapture::*)(Unity::Collections::NativeArray_1<uint8_t>)>(&UnityEngine::Profiling::Experimental::DebugScreenCapture::set_rawImageDataReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b6eeac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Experimental::DebugScreenCapture>::get(),
                            "set_rawImageDataReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Profiling::Experimental::DebugScreenCapture.set_imageFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Profiling::Experimental::DebugScreenCapture::*)(UnityEngine::TextureFormat)>(&UnityEngine::Profiling::Experimental::DebugScreenCapture::set_imageFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b6eeb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Experimental::DebugScreenCapture>::get(),
                            "set_imageFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextureFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Profiling::Experimental::DebugScreenCapture.set_width
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Profiling::Experimental::DebugScreenCapture::*)(int32_t)>(&UnityEngine::Profiling::Experimental::DebugScreenCapture::set_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b6eebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Experimental::DebugScreenCapture>::get(),
                            "set_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Profiling::Experimental::DebugScreenCapture.set_height
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Profiling::Experimental::DebugScreenCapture::*)(int32_t)>(&UnityEngine::Profiling::Experimental::DebugScreenCapture::set_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b6eec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Experimental::DebugScreenCapture>::get(),
                            "set_height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_rawImageDataReference_k__BackingField", ty: "Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_imageFormat_k__BackingField", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "_width_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_height_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Profiling::Experimental::DebugScreenCapture::DebugScreenCapture(Unity::Collections::NativeArray_1<uint8_t> _rawImageDataReference_k__BackingField, UnityEngine::TextureFormat _imageFormat_k__BackingField, int32_t _width_k__BackingField, int32_t _height_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_rawImageDataReference_k__BackingField = _rawImageDataReference_k__BackingField;
this->_imageFormat_k__BackingField = _imageFormat_k__BackingField;
this->_width_k__BackingField = _width_k__BackingField;
this->_height_k__BackingField = _height_k__BackingField;
}
constexpr void UnityEngine::Profiling::Experimental::DebugScreenCapture::__set__rawImageDataReference_k__BackingField(Unity::Collections::NativeArray_1<uint8_t> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<uint8_t>, 0x0>(this->__instance, std::forward<Unity::Collections::NativeArray_1<uint8_t>>(value));
}
constexpr Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Profiling::Experimental::DebugScreenCapture::__get__rawImageDataReference_k__BackingField() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<uint8_t>, 0x0>(this->__instance);
}
constexpr void UnityEngine::Profiling::Experimental::DebugScreenCapture::__set__imageFormat_k__BackingField(UnityEngine::TextureFormat value)  {
::cordl_internals::setInstanceField<UnityEngine::TextureFormat, 0x10>(this->__instance, std::forward<UnityEngine::TextureFormat>(value));
}
constexpr UnityEngine::TextureFormat UnityEngine::Profiling::Experimental::DebugScreenCapture::__get__imageFormat_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextureFormat, 0x10>(this->__instance);
}
constexpr void UnityEngine::Profiling::Experimental::DebugScreenCapture::__set__width_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Profiling::Experimental::DebugScreenCapture::__get__width_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::Profiling::Experimental::DebugScreenCapture::__set__height_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Profiling::Experimental::DebugScreenCapture::__get__height_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 void UnityEngine::Profiling::Experimental::DebugScreenCapture::set_rawImageDataReference(Unity::Collections::NativeArray_1<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Experimental::DebugScreenCapture>::get(),
                            "set_rawImageDataReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void UnityEngine::Profiling::Experimental::DebugScreenCapture::set_imageFormat(UnityEngine::TextureFormat value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Experimental::DebugScreenCapture>::get(),
                            "set_imageFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextureFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void UnityEngine::Profiling::Experimental::DebugScreenCapture::set_width(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Experimental::DebugScreenCapture>::get(),
                            "set_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void UnityEngine::Profiling::Experimental::DebugScreenCapture::set_height(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Experimental::DebugScreenCapture>::get(),
                            "set_height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
