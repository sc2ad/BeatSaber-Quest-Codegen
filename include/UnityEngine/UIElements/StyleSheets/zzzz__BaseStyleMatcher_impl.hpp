#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__Expression_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
// Ctor Parameters [CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "matchedVariableCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext(int32_t valueIndex, int32_t matchedVariableCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->valueIndex = valueIndex;
this->matchedVariableCount = matchedVariableCount;
}
constexpr void UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext::__set_valueIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext::__get_valueIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext::__set_matchedVariableCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext::__get_matchedVariableCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchKeyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::StringW)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchKeyword)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchInteger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchPercentage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchPercentage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchResource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchResource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchUrl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAngle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchCustomIdent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCustomIdent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_valueCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_valueCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_isCurrentVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentVariable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_isCurrentComma
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentComma)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_hasCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_hasCurrent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c778b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "get_hasCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_currentIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_currentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c778e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "get_currentIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.set_currentIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(int32_t)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_currentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c778e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "set_currentIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_matchedVariableCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_matchedVariableCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c778f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "get_matchedVariableCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.set_matchedVariableCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(int32_t)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_matchedVariableCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c778f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "set_matchedVariableCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Initialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c77900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MoveNext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c77954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.SaveContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::SaveContext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c77998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "SaveContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.RestoreContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::RestoreContext)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c779ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "RestoreContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.DropContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::DropContext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c77a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "DropContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.Match
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Match)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c77a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "Match",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchExpression
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpression)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2c77b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchExpression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchExpressionWithMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpressionWithMultiplier)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2c77c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchExpressionWithMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchGroup)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c77f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchCombinator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCombinator)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c77db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchCombinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchOr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOr)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2c7802c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchOr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchOrOr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOrOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c780fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchOrOr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchAndAnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAndAnd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c78114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchAndAnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchMany
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchMany)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2c781b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchMany",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchManyByOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression, void*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchManyByOrder)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2c78330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchManyByOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchJuxtaposition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchJuxtaposition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c78144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchJuxtaposition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchDataType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(UnityEngine::UIElements::StyleSheets::Syntax::Expression)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchDataType)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2c77e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchDataType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c784c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__set_s_CustomIdentRegex(System::Text::RegularExpressions::Regex value)  {
::cordl_internals::setStaticField<System::Text::RegularExpressions::Regex, "s_CustomIdentRegex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get>(std::forward<System::Text::RegularExpressions::Regex>(value));
}
 System::Text::RegularExpressions::Regex UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__get_s_CustomIdentRegex()  {
return ::cordl_internals::getStaticField<System::Text::RegularExpressions::Regex, "s_CustomIdentRegex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get>();
}
constexpr void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__set_m_ContextStack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>>(value));
}
constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__get_m_ContextStack() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__set_m_CurrentContext(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>(value));
}
constexpr UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__get_m_CurrentContext() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchKeyword(::StringW keyword)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, keyword);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchInteger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchPercentage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchPercentage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchResource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchUrl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAngle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCustomIdent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchCustomIdent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_valueCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "get_valueCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentVariable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "get_isCurrentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentComma()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "get_isCurrentComma",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_hasCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "get_hasCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_currentIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "get_currentIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_currentIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "set_currentIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_matchedVariableCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "get_matchedVariableCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_matchedVariableCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "set_matchedVariableCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::SaveContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "SaveContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::RestoreContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "RestoreContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::DropContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "DropContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Match(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "Match",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpression(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchExpression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpressionWithMultiplier(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchExpressionWithMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchGroup(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCombinator(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchCombinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOr(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchOr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOrOr(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchOrOr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAndAnd(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchAndAnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchMany(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchMany",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchManyByOrder(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp, void* matchOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchManyByOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, exp, matchOrder);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchJuxtaposition(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchJuxtaposition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchDataType(UnityEngine::UIElements::StyleSheets::Syntax::Expression exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            "MatchDataType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exp);
}
 UnityEngine::UIElements::StyleSheets::BaseStyleMatcher UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::New_ctor()  {
UnityEngine::UIElements::StyleSheets::BaseStyleMatcher o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>())};
return o;
}
 void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::BaseStyleMatcher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
