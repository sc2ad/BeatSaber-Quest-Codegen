#pragma once
#include "System/Xml/Schema/zzzz__InteriorNode_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__ChoiceNode_def.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode.ConstructChildPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::SyntaxTreeNode, ::System::Xml::Schema::BitSet, ::System::Xml::Schema::BitSet, ::ArrayW<::System::Xml::Schema::BitSet>)>(&::System::Xml::Schema::ChoiceNode::ConstructChildPos)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x271af6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                            "ConstructChildPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SyntaxTreeNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode.ConstructPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ChoiceNode::*)(::System::Xml::Schema::BitSet, ::System::Xml::Schema::BitSet, ::ArrayW<::System::Xml::Schema::BitSet>)>(&::System::Xml::Schema::ChoiceNode::ConstructPos)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x271b048;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::ChoiceNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode.get_IsNullable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::ChoiceNode::*)()>(&::System::Xml::Schema::ChoiceNode::get_IsNullable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x271b160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::ChoiceNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode.ExpandTree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ChoiceNode::*)(::System::Xml::Schema::InteriorNode, ::System::Xml::Schema::SymbolsDictionary, ::System::Xml::Schema::Positions)>(&::System::Xml::Schema::ChoiceNode::ExpandTree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x271b1f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::ChoiceNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChoiceNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ChoiceNode::*)()>(&::System::Xml::Schema::ChoiceNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271a7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::Xml::Schema::ChoiceNode::ConstructChildPos(::System::Xml::Schema::SyntaxTreeNode child, ::System::Xml::Schema::BitSet firstpos, ::System::Xml::Schema::BitSet lastpos, ::ArrayW<::System::Xml::Schema::BitSet> followpos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                            "ConstructChildPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SyntaxTreeNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, child, firstpos, lastpos, followpos);
}
 void ::System::Xml::Schema::ChoiceNode::ConstructPos(::System::Xml::Schema::BitSet firstpos, ::System::Xml::Schema::BitSet lastpos, ::ArrayW<::System::Xml::Schema::BitSet> followpos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                            "ConstructPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstpos, lastpos, followpos);
}
 bool ::System::Xml::Schema::ChoiceNode::get_IsNullable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                            "get_IsNullable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::Schema::ChoiceNode::ExpandTree(::System::Xml::Schema::InteriorNode parent, ::System::Xml::Schema::SymbolsDictionary symbols, ::System::Xml::Schema::Positions positions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                            "ExpandTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::InteriorNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, symbols, positions);
}
// Ctor Parameters []
 ::System::Xml::Schema::ChoiceNode::ChoiceNode()  : ::System::Xml::Schema::InteriorNode(THROW_UNLESS(::il2cpp_utils::New<ChoiceNode>())) {}
 void ::System::Xml::Schema::ChoiceNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChoiceNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
