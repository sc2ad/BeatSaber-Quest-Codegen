#pragma once
#include "System/Xml/Schema/zzzz__InteriorNode_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Xml/Schema/zzzz__SequenceNode_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
//  Writing Method size for method: System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::*)(System::Xml::Schema::SequenceNode, System::Xml::Schema::BitSet, System::Xml::Schema::BitSet)>(&System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x271adf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SequenceNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "this_", ty: "System::Xml::Schema::SequenceNode", modifiers: "", def_value: Some("csnull") }, CppParam { name: "firstpos", ty: "System::Xml::Schema::BitSet", modifiers: "", def_value: Some("csnull") }, CppParam { name: "lastpos", ty: "System::Xml::Schema::BitSet", modifiers: "", def_value: Some("csnull") }, CppParam { name: "lastposLeft", ty: "System::Xml::Schema::BitSet", modifiers: "", def_value: Some("csnull") }, CppParam { name: "firstposRight", ty: "System::Xml::Schema::BitSet", modifiers: "", def_value: Some("csnull") }]
constexpr System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::System__Xml__Schema__SequenceNode__SequenceConstructPosContext(System::Xml::Schema::SequenceNode this_, System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, System::Xml::Schema::BitSet lastposLeft, System::Xml::Schema::BitSet firstposRight) noexcept : ::bs_hook::ValueTypeWrapper() {this->this_ = this_;
this->firstpos = firstpos;
this->lastpos = lastpos;
this->lastposLeft = lastposLeft;
this->firstposRight = firstposRight;
}
constexpr void System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__set_this_(System::Xml::Schema::SequenceNode value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::SequenceNode, 0x0>(this->__instance, std::forward<System::Xml::Schema::SequenceNode>(value));
}
constexpr System::Xml::Schema::SequenceNode System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__get_this_() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::SequenceNode, 0x0>(this->__instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__set_firstpos(System::Xml::Schema::BitSet value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::BitSet, 0x8>(this->__instance, std::forward<System::Xml::Schema::BitSet>(value));
}
constexpr System::Xml::Schema::BitSet System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__get_firstpos() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::BitSet, 0x8>(this->__instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__set_lastpos(System::Xml::Schema::BitSet value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::BitSet, 0x10>(this->__instance, std::forward<System::Xml::Schema::BitSet>(value));
}
constexpr System::Xml::Schema::BitSet System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__get_lastpos() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::BitSet, 0x10>(this->__instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__set_lastposLeft(System::Xml::Schema::BitSet value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::BitSet, 0x18>(this->__instance, std::forward<System::Xml::Schema::BitSet>(value));
}
constexpr System::Xml::Schema::BitSet System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__get_lastposLeft() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::BitSet, 0x18>(this->__instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__set_firstposRight(System::Xml::Schema::BitSet value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::BitSet, 0x20>(this->__instance, std::forward<System::Xml::Schema::BitSet>(value));
}
constexpr System::Xml::Schema::BitSet System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::__get_firstposRight() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::BitSet, 0x20>(this->__instance);
}
 void System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext::_ctor(System::Xml::Schema::SequenceNode node, System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SequenceNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, node, firstpos, lastpos);
}
//  Writing Method size for method: System::Xml::Schema::SequenceNode.ConstructPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SequenceNode::*)(System::Xml::Schema::BitSet, System::Xml::Schema::BitSet, ::ArrayW<System::Xml::Schema::BitSet>)>(&System::Xml::Schema::SequenceNode::ConstructPos)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x271aaac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::SequenceNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SequenceNode>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SequenceNode.get_IsNullable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SequenceNode::*)()>(&System::Xml::Schema::SequenceNode::get_IsNullable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x271ae04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::SequenceNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SequenceNode>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SequenceNode.ExpandTree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SequenceNode::*)(System::Xml::Schema::InteriorNode, System::Xml::Schema::SymbolsDictionary, System::Xml::Schema::Positions)>(&System::Xml::Schema::SequenceNode::ExpandTree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x271af60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::SequenceNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SequenceNode>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::SequenceNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SequenceNode::*)()>(&System::Xml::Schema::SequenceNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271af64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SequenceNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Xml::Schema::SequenceNode::ConstructPos(System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SequenceNode>::get(),
                            "ConstructPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Xml::Schema::BitSet>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstpos, lastpos, followpos);
}
 bool System::Xml::Schema::SequenceNode::get_IsNullable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SequenceNode>::get(),
                            "get_IsNullable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::Schema::SequenceNode::ExpandTree(System::Xml::Schema::InteriorNode parent, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SequenceNode>::get(),
                            "ExpandTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::InteriorNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SymbolsDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::Positions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, symbols, positions);
}
// Ctor Parameters []
 System::Xml::Schema::SequenceNode::SequenceNode()  : System::Xml::Schema::InteriorNode(THROW_UNLESS(::il2cpp_utils::New<SequenceNode>())) {}
 void System::Xml::Schema::SequenceNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::SequenceNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
