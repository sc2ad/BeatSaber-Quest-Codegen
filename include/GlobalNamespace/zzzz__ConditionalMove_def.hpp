#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalMove;
}
// Type: ::ConditionalMove
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5446))
// CS Name: ConditionalMove
class CORDL_TYPE ConditionalMove : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ConditionalMove() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalMove", modifiers: " const&", def_value: None }]
constexpr ConditionalMove(ConditionalMove const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalMove", modifiers: "&&", def_value: None }]
constexpr ConditionalMove(ConditionalMove&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConditionalMove(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ConditionalMove& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConditionalMove& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConditionalMove& operator=(ConditionalMove&& o) noexcept = default;
  constexpr ConditionalMove& operator=(ConditionalMove const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__offset() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__value() const;

 bool __declspec(property(get=__get__activateOnFalse, put=__set__activateOnFalse))  _activateOnFalse;

constexpr void __set__activateOnFalse(bool value) ;

constexpr bool __get__activateOnFalse() const;


// Methods

/// @brief Method Awake addr 0x211574c size 0xb8 virtual false final false
 void Awake() ;

static GlobalNamespace::ConditionalMove New_ctor() ;

/// @brief Method .ctor addr 0x2115804 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConditionalMove);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalMove, "", "ConditionalMove");
