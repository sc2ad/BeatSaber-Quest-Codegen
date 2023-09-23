#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: UnityEngine::Rendering::LocalKeywordSpace.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::LocalKeywordSpace::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::Rendering::LocalKeywordSpace::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b76fb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Rendering::LocalKeywordSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeywordSpace>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::LocalKeywordSpace.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::LocalKeywordSpace::*)(UnityEngine::Rendering::LocalKeywordSpace)>(&UnityEngine::Rendering::LocalKeywordSpace::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b77030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeywordSpace>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LocalKeywordSpace>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::LocalKeywordSpace.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Rendering::LocalKeywordSpace, UnityEngine::Rendering::LocalKeywordSpace)>(&UnityEngine::Rendering::LocalKeywordSpace::op_Equality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeywordSpace>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LocalKeywordSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LocalKeywordSpace>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::LocalKeywordSpace.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Rendering::LocalKeywordSpace::*)()>(&UnityEngine::Rendering::LocalKeywordSpace::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b76f8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Rendering::LocalKeywordSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeywordSpace>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rendering::LocalKeywordSpace>
constexpr  UnityEngine::Rendering::LocalKeywordSpace::operator System::IEquatable_1<UnityEngine::Rendering::LocalKeywordSpace>() const {
return System::IEquatable_1<UnityEngine::Rendering::LocalKeywordSpace>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_KeywordSpace", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::LocalKeywordSpace::LocalKeywordSpace(::cordl_internals::intptr_t m_KeywordSpace) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_KeywordSpace = m_KeywordSpace;
}
constexpr void UnityEngine::Rendering::LocalKeywordSpace::__set_m_KeywordSpace(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::Rendering::LocalKeywordSpace::__get_m_KeywordSpace() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
 bool UnityEngine::Rendering::LocalKeywordSpace::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeywordSpace>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, o);
}
 bool UnityEngine::Rendering::LocalKeywordSpace::Equals(UnityEngine::Rendering::LocalKeywordSpace rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeywordSpace>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LocalKeywordSpace>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, rhs);
}
 bool UnityEngine::Rendering::LocalKeywordSpace::op_Equality(UnityEngine::Rendering::LocalKeywordSpace lhs, UnityEngine::Rendering::LocalKeywordSpace rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeywordSpace>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LocalKeywordSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LocalKeywordSpace>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
 int32_t UnityEngine::Rendering::LocalKeywordSpace::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeywordSpace>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
