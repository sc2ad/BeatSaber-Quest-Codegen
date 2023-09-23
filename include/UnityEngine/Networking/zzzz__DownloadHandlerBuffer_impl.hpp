#pragma once
#include "UnityEngine/Networking/zzzz__DownloadHandler_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerBuffer_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: UnityEngine::Networking::DownloadHandlerBuffer.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(UnityEngine::Networking::DownloadHandlerBuffer)>(&UnityEngine::Networking::DownloadHandlerBuffer::Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d3764c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::DownloadHandlerBuffer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::DownloadHandlerBuffer.InternalCreateBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::InternalCreateBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d37688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                            "InternalCreateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::DownloadHandlerBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2d36cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::DownloadHandlerBuffer.GetNativeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Collections::NativeArray_1<uint8_t> (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::GetNativeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d376cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Networking::DownloadHandlerBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::DownloadHandlerBuffer.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d376d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Networking::DownloadHandlerBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Networking::DownloadHandlerBuffer::__set_m_NativeData(Unity::Collections::NativeArray_1<uint8_t> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Unity::Collections::NativeArray_1<uint8_t>>(value));
}
constexpr Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Networking::DownloadHandlerBuffer::__get_m_NativeData() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::cordl_internals::intptr_t UnityEngine::Networking::DownloadHandlerBuffer::Create(UnityEngine::Networking::DownloadHandlerBuffer obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::DownloadHandlerBuffer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, obj);
}
 void UnityEngine::Networking::DownloadHandlerBuffer::InternalCreateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                            "InternalCreateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::Networking::DownloadHandlerBuffer::DownloadHandlerBuffer()  : UnityEngine::Networking::DownloadHandler(THROW_UNLESS(::il2cpp_utils::New<DownloadHandlerBuffer>())) {}
 void UnityEngine::Networking::DownloadHandlerBuffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Networking::DownloadHandlerBuffer::GetNativeData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                            "GetNativeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::Collections::NativeArray_1<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::DownloadHandlerBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::DownloadHandlerBuffer>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
