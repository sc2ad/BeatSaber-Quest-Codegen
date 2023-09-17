#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct Guid;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputBinding__DisplayStringOptions;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputBinding__Flags;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputBinding__MatchOptions;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputBinding____c;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
// Type: ::DisplayStringOptions
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6266))
// CS Name: UnityEngine.InputSystem.InputBinding::DisplayStringOptions
struct CORDL_TYPE ____UnityEngine__InputSystem__InputBinding__DisplayStringOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputBinding__DisplayStringOptions(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputBinding__DisplayStringOptions(____UnityEngine__InputSystem__InputBinding__DisplayStringOptions const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputBinding__DisplayStringOptions(____UnityEngine__InputSystem__InputBinding__DisplayStringOptions&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputBinding__DisplayStringOptions& operator=(____UnityEngine__InputSystem__InputBinding__DisplayStringOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputBinding__DisplayStringOptions& operator=(____UnityEngine__InputSystem__InputBinding__DisplayStringOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputBinding__DisplayStringOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__InputBinding__DisplayStringOptions_Unwrapped : int32_t {
__DontUseShortDisplayNames = 1,
__DontOmitDevice = 2,
__DontIncludeInteractions = 4,
__IgnoreBindingOverrides = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__InputBinding__DisplayStringOptions_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__InputBinding__DisplayStringOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DontUseShortDisplayNames offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions const DontUseShortDisplayNames;

/// @brief Field DontOmitDevice offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions const DontOmitDevice;

/// @brief Field DontIncludeInteractions offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions const DontIncludeInteractions;

/// @brief Field IgnoreBindingOverrides offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions const IgnoreBindingOverrides;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::MatchOptions
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6267))
// CS Name: UnityEngine.InputSystem.InputBinding::MatchOptions
struct CORDL_TYPE ____UnityEngine__InputSystem__InputBinding__MatchOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputBinding__MatchOptions(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputBinding__MatchOptions(____UnityEngine__InputSystem__InputBinding__MatchOptions const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputBinding__MatchOptions(____UnityEngine__InputSystem__InputBinding__MatchOptions&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputBinding__MatchOptions& operator=(____UnityEngine__InputSystem__InputBinding__MatchOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputBinding__MatchOptions& operator=(____UnityEngine__InputSystem__InputBinding__MatchOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputBinding__MatchOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__InputBinding__MatchOptions_Unwrapped : int32_t {
__EmptyGroupMatchesAny = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__InputBinding__MatchOptions_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__InputBinding__MatchOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field EmptyGroupMatchesAny offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__MatchOptions const EmptyGroupMatchesAny;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Flags
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6268))
// CS Name: UnityEngine.InputSystem.InputBinding::Flags
struct CORDL_TYPE ____UnityEngine__InputSystem__InputBinding__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputBinding__Flags(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputBinding__Flags(____UnityEngine__InputSystem__InputBinding__Flags const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputBinding__Flags(____UnityEngine__InputSystem__InputBinding__Flags&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputBinding__Flags& operator=(____UnityEngine__InputSystem__InputBinding__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputBinding__Flags& operator=(____UnityEngine__InputSystem__InputBinding__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputBinding__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__InputBinding__Flags_Unwrapped : int32_t {
__None = 0,
__Composite = 4,
__PartOfComposite = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__InputBinding__Flags_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__InputBinding__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags const None;

/// @brief Field Composite offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags const Composite;

/// @brief Field PartOfComposite offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags const PartOfComposite;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6269))
// CS Name: UnityEngine.InputSystem.InputBinding::<>c
class CORDL_TYPE ____UnityEngine__InputSystem__InputBinding____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__InputSystem__InputBinding____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputBinding____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputBinding____c(____UnityEngine__InputSystem__InputBinding____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputBinding____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputBinding____c(____UnityEngine__InputSystem__InputBinding____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputBinding____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputBinding____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputBinding____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputBinding____c& operator=(____UnityEngine__InputSystem__InputBinding____c&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputBinding____c& operator=(____UnityEngine__InputSystem__InputBinding____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding____c value) ;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding____c __get___9() ;

static ::System::Func_2<::StringW,bool> __declspec(property(get=__get___9__45_0, put=__set___9__45_0))  __9__45_0;

static void __set___9__45_0(::System::Func_2<::StringW,bool> value) ;

static ::System::Func_2<::StringW,bool> __get___9__45_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__InputBinding____c() ;

/// @brief Method .ctor addr 0x28c3418 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <MaskByGroups>b__45_0 addr 0x28c3420 size 0x20 virtual false final false
 bool _MaskByGroups_b__45_0(::StringW x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBinding
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6270))
// CS Name: UnityEngine.InputSystem.InputBinding
struct CORDL_TYPE InputBinding : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding____c;

using Flags = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags;

using MatchOptions = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__MatchOptions;

using DisplayStringOptions = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>() const;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Groups", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags", modifiers: "", def_value: None }, CppParam { name: "m_OverridePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_OverrideInteractions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_OverrideProcessors", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InputBinding(::StringW m_Name, ::StringW m_Id, ::StringW m_Path, ::StringW m_Interactions, ::StringW m_Processors, ::StringW m_Groups, ::StringW m_Action, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags m_Flags, ::StringW m_OverridePath, ::StringW m_OverrideInteractions, ::StringW m_OverrideProcessors) noexcept;


                    constexpr InputBinding(InputBinding const&) = default;
                    constexpr InputBinding(InputBinding&&) = default;
                    constexpr InputBinding& operator=(InputBinding const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputBinding& operator=(InputBinding&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputBinding(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field Separator offset 0
static constexpr char16_t  Separator{;};

/// @brief Field kSeparatorString offset 0
static constexpr ::ConstString  kSeparatorString{u";"};

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 ::StringW __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(::StringW value) ;

constexpr ::StringW __get_m_Id() const;

 ::StringW __declspec(property(get=__get_m_Path, put=__set_m_Path))  m_Path;

constexpr void __set_m_Path(::StringW value) ;

constexpr ::StringW __get_m_Path() const;

 ::StringW __declspec(property(get=__get_m_Interactions, put=__set_m_Interactions))  m_Interactions;

constexpr void __set_m_Interactions(::StringW value) ;

constexpr ::StringW __get_m_Interactions() const;

 ::StringW __declspec(property(get=__get_m_Processors, put=__set_m_Processors))  m_Processors;

constexpr void __set_m_Processors(::StringW value) ;

constexpr ::StringW __get_m_Processors() const;

 ::StringW __declspec(property(get=__get_m_Groups, put=__set_m_Groups))  m_Groups;

constexpr void __set_m_Groups(::StringW value) ;

constexpr ::StringW __get_m_Groups() const;

 ::StringW __declspec(property(get=__get_m_Action, put=__set_m_Action))  m_Action;

constexpr void __set_m_Action(::StringW value) ;

constexpr ::StringW __get_m_Action() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags __get_m_Flags() const;

 ::StringW __declspec(property(get=__get_m_OverridePath, put=__set_m_OverridePath))  m_OverridePath;

constexpr void __set_m_OverridePath(::StringW value) ;

constexpr ::StringW __get_m_OverridePath() const;

 ::StringW __declspec(property(get=__get_m_OverrideInteractions, put=__set_m_OverrideInteractions))  m_OverrideInteractions;

constexpr void __set_m_OverrideInteractions(::StringW value) ;

constexpr ::StringW __get_m_OverrideInteractions() const;

 ::StringW __declspec(property(get=__get_m_OverrideProcessors, put=__set_m_OverrideProcessors))  m_OverrideProcessors;

constexpr void __set_m_OverrideProcessors(::StringW value) ;

constexpr ::StringW __get_m_OverrideProcessors() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 ::System::Guid __declspec(property(get=get_id, put=set_id))  id;

 ::StringW __declspec(property(get=get_path, put=set_path))  path;

 ::StringW __declspec(property(get=get_overridePath, put=set_overridePath))  overridePath;

 ::StringW __declspec(property(get=get_interactions, put=set_interactions))  interactions;

 ::StringW __declspec(property(get=get_overrideInteractions, put=set_overrideInteractions))  overrideInteractions;

 ::StringW __declspec(property(get=get_processors, put=set_processors))  processors;

 ::StringW __declspec(property(get=get_overrideProcessors, put=set_overrideProcessors))  overrideProcessors;

 ::StringW __declspec(property(get=get_groups, put=set_groups))  groups;

 ::StringW __declspec(property(get=get_action, put=set_action))  action;

 bool __declspec(property(get=get_isComposite, put=set_isComposite))  isComposite;

 bool __declspec(property(get=get_isPartOfComposite, put=set_isPartOfComposite))  isPartOfComposite;

 bool __declspec(property(get=get_hasOverrides))  hasOverrides;

 ::StringW __declspec(property(get=get_effectivePath))  effectivePath;

 ::StringW __declspec(property(get=get_effectiveInteractions))  effectiveInteractions;

 ::StringW __declspec(property(get=get_effectiveProcessors))  effectiveProcessors;

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

/// @brief Method get_name addr 0x28c2684 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x28c268c size 0x8 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method get_id addr 0x28c2694 size 0x48 virtual false final false
 ::System::Guid get_id() ;

/// @brief Method set_id addr 0x28c26dc size 0x2c virtual false final false
 void set_id(::System::Guid value) ;

/// @brief Method get_path addr 0x28c2708 size 0x8 virtual false final false
 ::StringW get_path() ;

/// @brief Method set_path addr 0x28c2710 size 0x8 virtual false final false
 void set_path(::StringW value) ;

/// @brief Method get_overridePath addr 0x28c2718 size 0x8 virtual false final false
 ::StringW get_overridePath() ;

/// @brief Method set_overridePath addr 0x28c2720 size 0x8 virtual false final false
 void set_overridePath(::StringW value) ;

/// @brief Method get_interactions addr 0x28c2728 size 0x8 virtual false final false
 ::StringW get_interactions() ;

/// @brief Method set_interactions addr 0x28c2730 size 0x8 virtual false final false
 void set_interactions(::StringW value) ;

/// @brief Method get_overrideInteractions addr 0x28c2738 size 0x8 virtual false final false
 ::StringW get_overrideInteractions() ;

/// @brief Method set_overrideInteractions addr 0x28c2740 size 0x8 virtual false final false
 void set_overrideInteractions(::StringW value) ;

/// @brief Method get_processors addr 0x28c2748 size 0x8 virtual false final false
 ::StringW get_processors() ;

/// @brief Method set_processors addr 0x28c2750 size 0x8 virtual false final false
 void set_processors(::StringW value) ;

/// @brief Method get_overrideProcessors addr 0x28c2758 size 0x8 virtual false final false
 ::StringW get_overrideProcessors() ;

/// @brief Method set_overrideProcessors addr 0x28c2760 size 0x8 virtual false final false
 void set_overrideProcessors(::StringW value) ;

/// @brief Method get_groups addr 0x28c2768 size 0x8 virtual false final false
 ::StringW get_groups() ;

/// @brief Method set_groups addr 0x28c2770 size 0x8 virtual false final false
 void set_groups(::StringW value) ;

/// @brief Method get_action addr 0x28c2778 size 0x8 virtual false final false
 ::StringW get_action() ;

/// @brief Method set_action addr 0x28c2780 size 0x8 virtual false final false
 void set_action(::StringW value) ;

/// @brief Method get_isComposite addr 0x28b9f84 size 0xc virtual false final false
 bool get_isComposite() ;

/// @brief Method set_isComposite addr 0x28c2788 size 0x1c virtual false final false
 void set_isComposite(bool value) ;

/// @brief Method get_isPartOfComposite addr 0x28b9f90 size 0xc virtual false final false
 bool get_isPartOfComposite() ;

/// @brief Method set_isPartOfComposite addr 0x28ba284 size 0x1c virtual false final false
 void set_isPartOfComposite(bool value) ;

/// @brief Method get_hasOverrides addr 0x28c27a4 size 0x28 virtual false final false
 bool get_hasOverrides() ;

/// @brief Method .ctor addr 0x28c27cc size 0x20 virtual false final false
 void _ctor(::StringW path, ::StringW action, ::StringW groups, ::StringW processors, ::StringW interactions, ::StringW name) ;

/// @brief Method GetNameOfComposite addr 0x28c27ec size 0x44 virtual false final false
 ::StringW GetNameOfComposite() ;

/// @brief Method GenerateId addr 0x28c2830 size 0x34 virtual false final false
 void GenerateId() ;

/// @brief Method RemoveOverrides addr 0x28c2864 size 0xc virtual false final false
 void RemoveOverrides() ;

/// @brief Method MaskByGroup addr 0x28c2870 size 0x18 virtual false final false
static ::UnityEngine::InputSystem::InputBinding MaskByGroup(::StringW group) ;

/// @brief Method MaskByGroups addr 0x28c2888 size 0x160 virtual false final false
static ::UnityEngine::InputSystem::InputBinding MaskByGroups(::ArrayW<::StringW> groups) ;

/// @brief Method get_effectivePath addr 0x28bb94c size 0x18 virtual false final false
 ::StringW get_effectivePath() ;

/// @brief Method get_effectiveInteractions addr 0x28c29e8 size 0x18 virtual false final false
 ::StringW get_effectiveInteractions() ;

/// @brief Method get_effectiveProcessors addr 0x28c2a00 size 0x18 virtual false final false
 ::StringW get_effectiveProcessors() ;

/// @brief Method get_isEmpty addr 0x28c2a18 size 0x4c virtual false final false
 bool get_isEmpty() ;

/// @brief Method Equals addr 0x28c2a64 size 0xcc virtual true final true
 bool Equals(::UnityEngine::InputSystem::InputBinding other) ;

/// @brief Method Equals addr 0x28c2b30 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Equality addr 0x28baa68 size 0x34 virtual false final false
static bool op_Equality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right) ;

/// @brief Method op_Inequality addr 0x28c2bc0 size 0x4c virtual false final false
static bool op_Inequality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right) ;

/// @brief Method GetHashCode addr 0x28c2c0c size 0xfc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x28c2d08 size 0x104 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToDisplayString addr 0x28c2e0c size 0x2c virtual false final false
 ::StringW ToDisplayString(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToDisplayString addr 0x28c2e38 size 0x46c virtual false final false
 ::StringW ToDisplayString(ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method TriggersAction addr 0x28b9f2c size 0x58 virtual false final false
 bool TriggersAction(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method Matches addr 0x28c32a4 size 0x8 virtual false final false
 bool Matches(::UnityEngine::InputSystem::InputBinding binding) ;

/// @brief Method Matches addr 0x28c32ac size 0x108 virtual false final false
 bool Matches(ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__MatchOptions options) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions, "UnityEngine.InputSystem", "InputBinding/DisplayStringOptions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__Flags, "UnityEngine.InputSystem", "InputBinding/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__MatchOptions, "UnityEngine.InputSystem", "InputBinding/MatchOptions");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding____c, "UnityEngine.InputSystem", "InputBinding/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBinding, "UnityEngine.InputSystem", "InputBinding");
