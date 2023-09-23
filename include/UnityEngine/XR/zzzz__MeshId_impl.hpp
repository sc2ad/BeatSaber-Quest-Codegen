#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/XR/zzzz__MeshId_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: UnityEngine::XR::MeshId.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::MeshId::*)()>(&UnityEngine::XR::MeshId::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d3a1b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::MeshId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::MeshId.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::XR::MeshId::*)()>(&UnityEngine::XR::MeshId::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d3a248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::MeshId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::MeshId.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::MeshId::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::XR::MeshId::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d3a27c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::MeshId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::MeshId.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::MeshId::*)(UnityEngine::XR::MeshId)>(&UnityEngine::XR::MeshId::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d3a304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::MeshId>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::XR::MeshId>
constexpr  UnityEngine::XR::MeshId::operator System::IEquatable_1<UnityEngine::XR::MeshId>() const {
return System::IEquatable_1<UnityEngine::XR::MeshId>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_SubId1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SubId2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::MeshId::MeshId(uint64_t m_SubId1, uint64_t m_SubId2) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_SubId1 = m_SubId1;
this->m_SubId2 = m_SubId2;
}
 void UnityEngine::XR::MeshId::__set_s_InvalidId(UnityEngine::XR::MeshId value)  {
::cordl_internals::setStaticField<UnityEngine::XR::MeshId, "s_InvalidId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get>(std::forward<UnityEngine::XR::MeshId>(value));
}
 UnityEngine::XR::MeshId UnityEngine::XR::MeshId::__get_s_InvalidId()  {
return ::cordl_internals::getStaticField<UnityEngine::XR::MeshId, "s_InvalidId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get>();
}
constexpr void UnityEngine::XR::MeshId::__set_m_SubId1(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t UnityEngine::XR::MeshId::__get_m_SubId1() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::MeshId::__set_m_SubId2(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t UnityEngine::XR::MeshId::__get_m_SubId2() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
 ::StringW UnityEngine::XR::MeshId::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::XR::MeshId::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::XR::MeshId::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool UnityEngine::XR::MeshId::Equals(UnityEngine::XR::MeshId other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::MeshId>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::MeshId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
